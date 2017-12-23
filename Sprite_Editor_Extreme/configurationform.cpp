#include "configurationform.h"
#include "ui_configurationform.h"

ConfigurationForm::ConfigurationForm(QWidget *parent) :
    QDialog(parent), ui(new Ui::ConfigurationForm){
    ui->setupUi(this);
}

ConfigurationForm::~ConfigurationForm(){
    delete ui;
}

Ui::ConfigurationForm * ConfigurationForm::get(){
    return this->ui;
}


std::vector<Property> ConfigurationForm::parseConfigurationForm(){
    std::vector<Property> properties;
    bool ok;
    bool alsoOk;
    int cwparse = ui->canvasWidthEdit->text().toInt(&alsoOk); // parse text from here
    int chparse = ui->canvasHeightEdit->text().toInt(&ok);

    if(ok&&alsoOk){
        Property tosend("canvasSize");
        tosend.addValue(cwparse);
        tosend.addValue(chparse);
        properties.push_back(tosend);
    }
    return properties;
}
