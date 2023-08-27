#include <QApplication>
#include <QPushButton>
#include <QFileDialog>
#include "encdec.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QPushButton *encryptButton = new QPushButton("Encrypt");
    QPushButton *decryptButton = new QPushButton("Decrypt");
    QFileDialog *fileDialog = new QFileDialog();

    encdec encdecInstance;

    QObject::connect(encryptButton, &QPushButton::clicked, [&](){
        encdecInstance.file = fileDialog->getOpenFileName().toStdString();
        encdecInstance.encrypt();
    });

    QObject::connect(decryptButton, &QPushButton::clicked, [&](){
        encdecInstance.file = fileDialog->getOpenFileName().toStdString();
        encdecInstance.decrypt();
    });

    encryptButton->show();
    decryptButton->show();

    return app.exec();
}
