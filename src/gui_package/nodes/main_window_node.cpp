#include <QApplication>
#include <QIcon>
#include "main_window.h"


int main(int argc, char *argv[])
{
  ros::init(argc, argv, "main_window_node");
  QApplication a(argc, argv);

  MainWindow m;
  std::string title = "Peter the Pepper Picking Robot";
  // set the window title as the node name
  m.setWindowTitle(QString::fromStdString(title));

  // load the icon from our qrc file and set it as the application icon
  QIcon icon(":/icons/PepperIcon.png");
  m.setWindowIcon(icon);

  m.show();
  return a.exec();
}
