#ifndef END_EFFECTOR_H
#define END_EFFECTOR_H

#include <QTabWidget>
#include <QWidget>

#include <ros/ros.h>
#include <qtimer.h>
#include <std_msgs/String.h>
#include <std_msgs/Int16.h>

namespace Ui {
class EndEffector;
}

class EndEffector : public QWidget
{
  Q_OBJECT

public:
  explicit EndEffector(QWidget *parent = nullptr);
  ~EndEffector();
  void ee_stateCallback(const std_msgs::Int16::ConstPtr& e);
  void sys_stateCallback(const std_msgs::Int16::ConstPtr& s);
  int sys_state;


public slots:
  void spinOnce();

private slots:
  void on_GripperOpenButton_clicked();
  void on_CutterOpenButton_clicked();
  void on_GripperCloseButton_clicked();
  void on_CutterCloseButton_clicked();
  void on_FactoryResetButton_clicked();
  void on_PingMotorButton_clicked();

private:
  Ui::EndEffector *ui;
  QTimer *ee_ros_timer;

  ros::NodeHandlePtr n;
  ros::Subscriber sys_state_sub;
  ros::Subscriber ee_state_sub;
  ros::Publisher state_pub;
};


#endif // END_EFFECTOR_H
