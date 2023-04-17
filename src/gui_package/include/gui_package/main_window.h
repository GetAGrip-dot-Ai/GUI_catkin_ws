#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QTabWidget>
#include <QMainWindow>

#include "end_effector.h"
#include "system.h"
#include "perception.h"

#include <ros/ros.h>
#include <qtimer.h>
#include <std_msgs/String.h>
#include <std_msgs/Int16.h>

//maybe add namespace
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    EndEffector* EndEffectorTab = new EndEffector();
    System* SystemTab = new System();
    Perception* PerceptionTab = new Perception();
  };

#endif // MAIN_WINDOW_H
