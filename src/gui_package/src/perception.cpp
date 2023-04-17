#include "perception.h"
#include "ui_perception.h"

Perception::Perception(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Perception)
{
  ui->setupUi(this);

  // node handler stuff
  p.reset(new ros::NodeHandle("~"));

  // setup the timer that will signal ros stuff to happen
  p_ros_timer = new QTimer(this);
  connect(p_ros_timer, SIGNAL(timeout()), this, SLOT(spinOnce()));
  p_ros_timer->start(100);  // set the rate to 100ms  You can change this if you want to increase/decrease update rate


//  // Create the Rviz visualization manager and set up default settings
//  rviz::VisualizationManager* vis_manager = new rviz::VisualizationManager(ui->Perception);
//  vis_manager->initialize();
//  vis_manager->startUpdate();

//  // Create the Rviz render panel and add it to the Qt widget
//  rviz::RenderPanel* render_panel = new rviz::RenderPanel(ui->Perception);
//  render_panel->initialize(vis_manager->getSceneManager(), vis_manager);

//  // Add any additional Rviz displays that you want to show in the Qt widget
//  rviz::Display* grid_display = vis_manager->createDisplay("rviz/Grid", "My Grid Display", true);

 //
}

Perception::~Perception()
{
  delete ui;
  delete p_ros_timer;
}

void Perception::spinOnce(){
  if(ros::ok()){
    ros::spinOnce();
  }
  else
      QApplication::quit();
}
