#ifndef CALC_H
#define CALC_H


#include <QMainWindow>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class Calc; }
QT_END_NAMESPACE

class Calc : public QMainWindow
{
    Q_OBJECT

public:
    Calc(QWidget *parent = nullptr);
    ~Calc();
    void manageCalc(QString buttontext);



private slots:
    void on_number1_clicked();

    void on_number2_clicked();

    void on_number3_clicked();

    void on_number4_clicked();

    void on_number5_clicked();

    void on_number6_clicked();

    void on_number7_clicked();

    void on_number8_clicked();

    void on_number9_clicked();

    void on_number0_clicked();

    void on_divide_clicked();

    void on_multiply_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_equal_clicked();

    void on_AC_clicked();

private:
Ui::Calc* ui;
QLineEdit *lineEdit;
QString Number1 = "";
QString Number2 = "";
QString OperationPressed = "";
bool Number2Exist = false;

};
#endif // CALC_H
