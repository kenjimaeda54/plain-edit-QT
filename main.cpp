#include "plain_edit_text.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Plain_Edit_Text w;
    w.show();
    return a.exec();
}
