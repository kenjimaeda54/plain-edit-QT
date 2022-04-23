#include "plain_edit_text.h"
#include "ui_plain_edit_text.h"

Plain_Edit_Text::Plain_Edit_Text(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Plain_Edit_Text)
{
    ui->setupUi(this);

}

Plain_Edit_Text::~Plain_Edit_Text()
{
    delete ui;
}


void Plain_Edit_Text::on_actionnew_file_triggered()
{
    //https://doc.qt.io/qt-5/stylesheet-examples.html
    ++addTab; //variavel chamado no arquivo .h, porque a ideia e ser global
//    ui->tab_edit->addTab( new QWidget(),"File ("+ QString::number(addTab) +")"); //transformando number em string, adicionado novo tab
      QTextEdit *editText = new QTextEdit;
      ui->tab_edit->addTab(editText, "File  (" + QString::number(addTab) + ")");//converntando numero para string , aqui estou adicionado uma tab
      editText->setStyleSheet("border:none;outline:none");  // assim sobescrevo os estilos das telas
}



void Plain_Edit_Text::on_tab_edit_tabCloseRequested(int index)
{
   ui->tab_edit->removeTab(index);
}

