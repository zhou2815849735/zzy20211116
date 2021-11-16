#ifndef TCIP_H
#define TCIP_H

#include <QtWidgets/QMainWindow>
#include "ui_tcip.h"

#include <QApplication>
#include <QDebug>

#include "./src/modbus.h"

class TCIP : public QMainWindow
{
	Q_OBJECT

public:
	TCIP(QWidget *parent = 0);
	~TCIP();

public slots:
	void pushButton_connect();

	void pushButton_IWrite();
	void pushButton_IRead();
	void pushButton_SWrite();
	void pushButton_SRead();
	void pushButton_FWrite();
	void pushButton_FRead();
	void pushButton_CoilWrite();
	void pushButton_CoilRead();

	void pushButton_test1();
	void pushButton_test2();
	void pushButton_Write();
	void pushButton_clear1();
	void pushButton_Read();
	void pushButton_clear2();

private:
	Ui::TCIPClass ui;
	modbus_t *modbus;
};

#endif // TCIP_H
