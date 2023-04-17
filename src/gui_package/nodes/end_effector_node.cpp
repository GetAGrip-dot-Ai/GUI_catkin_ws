#include <QApplication>
#include <QIcon>
#include "end_effector.h"


int main(int argc, char *argv[])
{

  ros::init(argc, argv, "end_effector_node");
  QApplication a(argc, argv);

  EndEffector e;

  // set the window title as the node name
  e.setWindowTitle(QString::fromStdString(
                       ros::this_node::getName()));

  e.show();
  return a.exec();
}
