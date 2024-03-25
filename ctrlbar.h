#ifndef CTRLBAR_H
#define CTRLBAR_H

#include <QWidget>

namespace Ui {
class ctrlbar;
}

class ctrlbar : public QWidget
{
    Q_OBJECT

public:
    explicit ctrlbar(QWidget *parent = nullptr);
    ~ctrlbar();

private slots:
    void on_forwardBtn_clicked();

private:
    Ui::ctrlbar *ui;
};

#endif // CTRLBAR_H
