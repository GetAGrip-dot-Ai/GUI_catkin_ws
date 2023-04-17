#ifndef SYSTEM_H
#define SYSTEM_H

#include <QWidget>
#include <ros/ros.h>
#include <qtimer.h>
#include <std_msgs/String.h>
#include <std_msgs/Int16.h>

namespace Ui {
class System;
}

class System : public QWidget
{
    Q_OBJECT

public:
    explicit System(QWidget *parent = nullptr);
    ~System();
    void chatterCallback(const std_msgs::String::ConstPtr& msg);
    void stateCallback(const std_msgs::Int16::ConstPtr& sys_state);


public slots:
    void spinOnce();

private slots:
    void on_hi_button_clicked();
    void on_manual_butt_clicked();
    void on_automatic_butt_clicked();

private:
    Ui::System *ui;
    QTimer *ros_timer;

    ros::NodeHandlePtr nh_;
    ros::Subscriber chatter_sub_;
    ros::Subscriber state_sub_;
    ros::Publisher  hello_pub_;
    ros::Publisher state_pub_;
  };

#endif // SYSTEM_H
