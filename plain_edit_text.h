#ifndef PLAIN_EDIT_TEXT_H
#define PLAIN_EDIT_TEXT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Plain_Edit_Text; }
QT_END_NAMESPACE

class Plain_Edit_Text : public QMainWindow
{
    Q_OBJECT

public:
    Plain_Edit_Text(QWidget *parent = nullptr);
    int short addTab = 0;
    ~Plain_Edit_Text();

private slots:
    void on_actionnew_file_triggered();

    void on_tab_edit_tabCloseRequested(int index);

private:
    Ui::Plain_Edit_Text *ui;
};
#endif // PLAIN_EDIT_TEXT_H
