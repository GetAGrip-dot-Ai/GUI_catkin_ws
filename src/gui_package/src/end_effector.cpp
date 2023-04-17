#include "end_effector.h"
#include "ui_end_effector.h"
#include <string>
#include <QPixmap>

EndEffector::EndEffector(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::EndEffector)
{
  ui->setupUi(this);
  QPixmap pix("/home/solomon/GUI_catkin_ws/src/gui_package/media/EE_pic.png");
  if (!pix.load( "/home/solomon/GUI_catkin_ws/src/gui_package/media/EE_pic.png" ))
  {
      qWarning("Failed to load image");}
  ui->EEPic->setPixmap(pix);

  // node handler stuff
  n.reset(new ros::NodeHandle("~"));

  // setup the timer that will signal ros stuff to happen
  ee_ros_timer = new QTimer(this);
  connect(ee_ros_timer, SIGNAL(timeout()), this, SLOT(spinOnce()));
  ee_ros_timer->start(100);  // set the rate to 100ms  You can change this if you want to increase/decrease update rate

  //subscribe to end effector state
  ee_state_sub = n->subscribe<std_msgs::Int16>("/end_effector/state", 1, &EndEffector::ee_stateCallback, this);

  //publish end effector action
  state_pub = n->advertise<std_msgs::Int16>("/end_effector/state", 1); //create publisher to "user_state" topic

}

EndEffector::~EndEffector()
{
  delete ui;
  delete ee_ros_timer;
}

void EndEffector::spinOnce(){
  if(ros::ok()){
    ros::spinOnce();
  }
  else
      QApplication::quit();
}

void EndEffector::on_GripperOpenButton_clicked()
{
  if (sys_state == 9) {
    std_msgs::Int16 des_state;
    des_state.data = 24;
    state_pub.publish(des_state);
  }
}
void EndEffector::on_GripperCloseButton_clicked()
{
  if (sys_state == 9) {
    std_msgs::Int16 des_state;
    des_state.data = 22;
    state_pub.publish(des_state);
  }
}
void EndEffector::on_CutterOpenButton_clicked()
{
  if (sys_state == 9) {
    std_msgs::Int16 des_state;
    des_state.data = 26;
    state_pub.publish(des_state);
  }
}

void EndEffector::on_CutterCloseButton_clicked()
{
  if (sys_state == 9) {
    std_msgs::Int16 des_state;
    des_state.data = 28;
    state_pub.publish(des_state);
  }
}

void EndEffector::on_PingMotorButton_clicked()
{
  if (sys_state == 9) {
    std_msgs::Int16 des_state;
    des_state.data = 28;
    state_pub.publish(des_state);
  }
}

void EndEffector::on_FactoryResetButton_clicked()
{
  if (sys_state == 9) {
    std_msgs::Int16 des_state;
    des_state.data = 28;
    state_pub.publish(des_state);
  }
}

void EndEffector::sys_stateCallback(const std_msgs::Int16::ConstPtr &s){
  sys_state = s->data;
}

void EndEffector::ee_stateCallback(const std_msgs::Int16::ConstPtr &e){

  std::string curr_state = std::to_string( e->data);
  std::string state_decoded;

  if (curr_state.substr(0,1) == "1")
  {
    //publish current gripper state as open
    state_decoded = "Open";
    auto qstring_msg = QString::fromStdString(state_decoded);

    ui->GripperState->setText(qstring_msg);
  }
  else
  {
    //publish current gripper state as closed
    state_decoded = "Closed";
    auto qstring_msg = QString::fromStdString(state_decoded);

    ui->GripperState->setText(qstring_msg);
  }
  if (curr_state.substr(1,1) == "1")
  {
    //publish current cutter state as open
    state_decoded = "Open";
    auto qstring_msg = QString::fromStdString(state_decoded);

    ui->CutterState->setText(qstring_msg);
  }
  else
  {
    //publish current cutter state as closed
    state_decoded = "Closed";
    auto qstring_msg = QString::fromStdString(state_decoded);

    ui->CutterState->setText(qstring_msg);
  }

}
