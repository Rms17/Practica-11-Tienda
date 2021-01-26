#include "acerca.h"
#include "ui_acerca.h"

Acerca::Acerca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Acerca)
{
    ui->setupUi(this);
}

Acerca::~Acerca()
{
    delete ui;
}

void Acerca::setDato(const QString &dato)
{
    m_dato = dato;
}

void Acerca::actualizar()
{
    ui->outTexto->setText(m_dato);
}

