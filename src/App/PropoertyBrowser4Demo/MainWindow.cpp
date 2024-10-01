#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "TestObjects.h"
#include <PropertyBrowser/propertybrowser.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->propertyBrowser->setMultiObjectListVisible(false);

    PropertyBrowser::registerBaseTypes();
    GadgetHelper::registerToIGadgetConverter<SimpleStruct>();
    GadgetHelper::registerToIGadgetConverter<ComplexStruct>();

    ComplexStruct v;

    ui->propertyBrowser->setVariant(v);
}

MainWindow::~MainWindow()
{
    delete ui;
}
