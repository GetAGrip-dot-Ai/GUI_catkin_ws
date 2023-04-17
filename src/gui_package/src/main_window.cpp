#include "main_window.h"
#include "ui_main_window.h"
#include <QPixmap>
#include <QTabBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
    ui->setupUi(this);

//    point to the tabs for subsystems
    auto* pSubsystemTabs = ui->centralwidget->findChild<QTabWidget*>("SubsystemTabs");

    // turn off the scroll button & make all tabs visible
    pSubsystemTabs->setUsesScrollButtons(false);

    //place the tabs in the widget
    pSubsystemTabs->addTab(SystemTab, "Peter's Gui");
    pSubsystemTabs->addTab(EndEffectorTab, "End-Effector");
    pSubsystemTabs->addTab(PerceptionTab, "Perception");

 }

MainWindow::~MainWindow()
{
    delete ui;

//free memory of widgets
    delete SystemTab;
    delete EndEffectorTab;
    delete PerceptionTab;

}




