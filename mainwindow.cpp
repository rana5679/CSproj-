#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <random>
#include <time.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_GenerateDatasetButton_clicked()
{
    srand(time(NULL));
    size =(ui->InputDataSetTextEdit->toPlainText()).toInt();

    for(int i =0; i<size; i++){
        nums[i]=QString::number(rand()% 100 +1);
    }

    for(int i =0; i<size; i++){
        ui->ArrayDisplayBox->setText(ui->ArrayDisplayBox->text()+" "+nums[i]);
        display += nums[i];
        display += "\n";
    }
}







