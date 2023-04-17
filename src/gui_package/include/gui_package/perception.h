#ifndef PERCEPTION_H
#define PERCEPTION_H

#include <QTabWidget>
#include <QWidget>

#include <ros/ros.h>
#include <qtimer.h>
#include <std_msgs/String.h>
#include <std_msgs/Int8.h>

#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
//#include <rviz/.h>

namespace Ui {
class Perception;
}

class Perception : public QWidget
{
  Q_OBJECT

public:
  explicit Perception(QWidget *parent = nullptr);
  ~Perception();


public slots:
  void spinOnce();

private:
  Ui::Perception *ui;
  QTimer *p_ros_timer;

  ros::NodeHandlePtr p;

  // rviz visualizers
//  rviz::VisualizationManager* p_viz_mng = rviz::VisualizationManager::instance();
//  rviz::RenderPanel *render_panel = percep_viz_mng->getRenderPanel();
//  QWidget *rviz_widget = render_panel->parentWidget();
};

#endif // PERCEPTION_H
