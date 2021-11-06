#ifndef COLORMANIA_H
#define COLORMANIA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ColorMania; }
QT_END_NAMESPACE

class ColorMania : public QMainWindow
{
    Q_OBJECT

public:
    ColorMania(QWidget *parent = nullptr);
    ~ColorMania();


private slots:
       void change_background();



private:
    Ui::ColorMania *ui;
};
#endif // COLORMANIA_H
