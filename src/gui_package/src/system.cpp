#include "system.h"
#include "ui_system.h"
#include <QPixmap>
#include <QTabBar>

System::System(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::System)
    {
    ui->setupUi(this);

    // Load in image of kinova
    QPixmap pix("/home/solomon/GUI_catkin_ws/src/gui_package/media/kinova.png");
  //  ui->Kinova_pic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    if (!pix.load( "/home/solomon/GUI_catkin_ws/src/gui_package/media/kinova.png" ))
    {
        qWarning("Failed to load image");}
    ui->Kinova_pic->setPixmap(pix);

    // node handler stuff
    nh_.reset(new ros::NodeHandle("~"));

    // setup the timer that will signal ros stuff to happen
    ros_timer = new QTimer(this);
    connect(ros_timer, SIGNAL(timeout()), this, SLOT(spinOnce()));
    ros_timer->start(100);  // set the rate to 100ms  You can change this if you want to increase/decrease update rate

    // setup subscriber by according to the ~/chatter_topic param
    std::string listen_topic;
    nh_->param<std::string>("listen_topic",listen_topic,"/talker/chatter");
    chatter_sub_ = nh_->subscribe<std_msgs::String>(listen_topic, 1, &System::chatterCallback, this);

    //subscribe to system state
    state_sub_ = nh_->subscribe<std_msgs::Int16>("/system/state", 1, &System::stateCallback, this);

    // publish a message on the channel specified by ~/hello_topic param
    std::string hello_topic;
    nh_->param<std::string>("hello_topic",hello_topic,"chatter");
    hello_pub_ = nh_->advertise<std_msgs::String>(hello_topic,1);

    // publish a desired state to user_state topic
    state_pub_ = nh_->advertise<std_msgs::Int16>("user_state", 1); //create publisher to "user_state" topic
 }

System::~System()
{
    delete ui;
    delete ros_timer;
}

void System::spinOnce(){
  if(ros::ok()){
    ros::spinOnce();
  }
  else
      QApplication::quit();
}


void System::chatterCallback(const std_msgs::String::ConstPtr &msg){
  auto qstring_msg = QString::fromStdString( msg->data.c_str() );

  ui->chatter->setText(qstring_msg);
}

void System::stateCallback(const std_msgs::Int16::ConstPtr &sys_state){
  std::string curr_state = std::to_string( sys_state->data);
  std::string state_decoded;

  if(curr_state == "9") {
    state_decoded = "manual operation";
    auto qstring_msg = QString::fromStdString(state_decoded);
    ui->current_state->setText(qstring_msg);
  }

  else {
    //maybe add state discriptions later
    state_decoded = curr_state;
    auto qstring_msg = QString::fromStdString(state_decoded);
    ui->current_state->setText(qstring_msg);
  }

}

void System::on_hi_button_clicked()
{
  std_msgs::String msg;
  std::stringstream ss;
  ss << "hello world " << ui->hi_num->value();
  msg.data = ss.str();

  hello_pub_.publish(msg);

  ui->hi_num->setValue(ui->hi_num->value()+1);
}

void System::on_manual_butt_clicked()
{
  std_msgs::String msg;
  std_msgs::Int16 state;

  state.data = 0; //manual state identifier

  // publish to topic as Int8)
  state_pub_.publish(state);

  //Convert to qstring and update GUI)
  msg.data = "manual operation";
  auto qstring_msg = QString::fromStdString( msg.data.c_str() );
  ui->goal_state->setText(qstring_msg);
}

void System::on_automatic_butt_clicked()
{
  std_msgs::String msg;
  std_msgs::Int16 state;
  std::stringstream ss;
  state.data = 1; //manual state identifier

  // publish to topic as Int8)
  state_pub_.publish(state);

  //Convert to qstring and update GUI)
  msg.data = "autonomous operation";
  auto qstring_msg = QString::fromStdString( msg.data.c_str() );
  ui->goal_state->setText(qstring_msg);

}

