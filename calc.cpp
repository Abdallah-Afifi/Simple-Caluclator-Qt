#include "calc.h"
#include "ui_calc.h"
#include <QLineEdit>

Calc::Calc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calc)
{
    ui->setupUi(this);
}

Calc::~Calc()
{
    delete ui;
}

void Calc::manageCalc(QString buttonText)
{
if (OperationPressed == "")
{
Number1 = buttonText;
ui->lineEdit->setText(Number1);
}
else
{
Number2 = buttonText;
Number2Exist = true;
ui->lineEdit->setText(ui->lineEdit->text() + Number2);
}
}


void Calc::on_number1_clicked()
{
    manageCalc(ui->number1->text());
}

void Calc::on_number2_clicked()
{
   manageCalc(ui->number2->text());
}

void Calc::on_number3_clicked()
{
  manageCalc(ui->number3->text());
}

void Calc::on_number4_clicked()
{
  manageCalc(ui->number4->text());
}

void Calc::on_number5_clicked()
{
   manageCalc(ui->number5->text());
}

void Calc::on_number6_clicked()
{
  manageCalc(ui->number6->text());
}

void Calc::on_number7_clicked()
{
    manageCalc(ui->number7->text());
}

void Calc::on_number8_clicked()
{
  manageCalc(ui->number8->text());
}

void Calc::on_number9_clicked()
{
   manageCalc(ui->number9->text());
}

void Calc::on_number0_clicked()
{
   manageCalc(ui->number0->text());
}

void Calc::on_divide_clicked()
{
    if (OperationPressed == "")
    {
    OperationPressed = ui->divide->text();
    ui->lineEdit->setText(ui->lineEdit->text() + OperationPressed);
    }
    else {
    Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
    ui->lineEdit->setText(" Error : you can not use multiple operations");
    }
}

void Calc::on_multiply_clicked()
{
    if (OperationPressed == "")
    {
    OperationPressed = ui->multiply->text();
    ui->lineEdit->setText(ui->lineEdit->text() + OperationPressed);
    }
    else {
    Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
    ui->lineEdit->setText(" Error : you can not use multiple operations");
    }
}

void Calc::on_plus_clicked()
{
    if (OperationPressed == "")
    {
    OperationPressed = ui->plus->text();
    ui->lineEdit->setText(ui->lineEdit->text() + OperationPressed);
    }
    else {
    Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
    ui->lineEdit->setText(" Error : you can not use multiple operations");
    }
    }

void Calc::on_minus_clicked()
{
    if (OperationPressed == "")
    {
    OperationPressed = ui->minus->text();
    ui->lineEdit->setText(ui->lineEdit->text() + OperationPressed);
    }
    else {
    Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
    ui->lineEdit->setText(" Error : you can not use multiple operations");
    }
}

void Calc::on_equal_clicked()
{
    {
    if (OperationPressed == "")
    {
    Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
    ui->lineEdit->setText(" Error : No operation");
    }
    if (!Number2Exist)
    {
    Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
    ui->lineEdit->setText(" Error : No second number given");
    }
    if (OperationPressed == "+")
    {
    ui->lineEdit->setText(QString::number(Number1.toDouble() + Number2.toDouble()));
    }
    else if (OperationPressed == "-")
    {
    ui->lineEdit->setText(QString::number(Number1.toDouble() - Number2.toDouble()));
    }
    else if (OperationPressed == "*")
    {
    ui->lineEdit->setText(QString::number(Number1.toDouble() * Number2.toDouble()));
    }
    else
    {
    if (Number2 == "0")
    {
    Number1 = ""; Number2 = ""; OperationPressed = "";
    Number2Exist = false; return;
    }
    ui->lineEdit->setText(QString::number(Number1.toDouble() / Number2.toDouble())); Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
    }}
}

void Calc::on_AC_clicked()
{
    ui->lineEdit->clear();
    Number1 = "";
    Number2 = "";
    OperationPressed = "";
    Number2Exist = false;
}
