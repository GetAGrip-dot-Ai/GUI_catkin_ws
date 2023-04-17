#include <QApplication>
#include <QIcon>
#include "system.h"


int main(int argc, char *argv[])
{

  ros::init(argc, argv, "system_node");
  QApplication a(argc, argv);

  System s;

  // set the window title as the node name
  s.setWindowTitle(QString::fromStdString(
                       ros::this_node::getName()));

  s.show();
  return a.exec();
}
