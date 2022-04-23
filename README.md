# Aba e edit text
Simples aplicacao de abas com edit text

# Motivação
Aprender o uso de abas e edit text com QT


## Feature
- Para criar as abas de forma dinâmica criei uma variável global no arquivo .h
- Com essa abordagem sempre vou ter disponibilidade para acessar essa variável
- Criei um atalho no tab bar para criar as tabs de forma dinâmica
- Para concatenar string com number eu converti usando QString::number
- Abordei de duas maneiras  adicionei as tabas sem dinamismo e a outra dinâmica
- As dinâmicas houve uma nova instância da classe QTextEdit com um ponteiro para manipular os estilos
- As escritas de estilo aqui seguem o [stylesheet](https://doc.qt.io/qt-5/stylesheet-examples.html)
- Consigo adicionar um slot nos atalhos criados no tab bar, neste caso usei evento e file_trigered(), para quando for clicado efetuar uma ação
- Para fechar as tabas usei um evento do próprio do tab edit, requestTabClose(int index), neste evento ele retorna o indicie da tab presente

``` c++


void Plain_Edit_Text::on_actionnew_file_triggered()
{
    //https://doc.qt.io/qt-5/stylesheet-examples.html
    ++addTab; //variavel chamado no arquivo .h, porque a ideia e ser global
//    ui->tab_edit->addTab( new QWidget(),"File ("+ QString::number(addTab) +")"); 
      QTextEdit *editText = new QTextEdit;
      ui->tab_edit->addTab(editText, "File  (" + QString::number(addTab) + ")");
      editText->setStyleSheet("border:none;outline:none"); 



void Plain_Edit_Text::on_tab_edit_tabCloseRequested(int index)
{
   ui->tab_edit->removeTab(index);
}
```
##

## ScreenShoot

![fileONe.jpeg](https://github.com/kenjimaeda54/plain-edit-QT/blob/develop/fileOne.jpeg)
![fileTwo.jpeg](https://github.com/kenjimaeda54/plain-edit-QT/blob/develop/fileTwo.jpeg)
![newFile.jpeg](https://github.com/kenjimaeda54/plain-edit-QT/blob/develop/newFile.jpeg)





