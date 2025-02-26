#ifndef MYCHAT_H
#define MYCHAT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class mychat;
}
QT_END_NAMESPACE

class mychat : public QWidget
{
    Q_OBJECT

public:
    mychat(QWidget *parent = nullptr);
    ~mychat();

private:
    Ui::mychat *ui;
};
#endif // MYCHAT_H
