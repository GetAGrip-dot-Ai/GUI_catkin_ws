#include <QApplication>
#include <QIcon>
#include "perception.h"


int main(int argc, char *argv[])
{

  ros::init(argc, argv, "perception_node");
  QApplication app(argc, argv);

  Perception p;

  // set the window title as the node name
  p.setWindowTitle(QString::fromStdString(
                       ros::this_node::getName()));
  p.show();
  return app.exec();
}
