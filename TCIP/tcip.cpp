#include "tcip.h"

TCIP::TCIP(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton_connect, SIGNAL(clicked()), this, SLOT(pushButton_connect()));

	connect(ui.pushButton_IWrite, SIGNAL(clicked()), this, SLOT(pushButton_IWrite()));
	connect(ui.pushButton_IRead, SIGNAL(clicked()), this, SLOT(pushButton_IRead()));
	connect(ui.pushButton_SWrite, SIGNAL(clicked()), this, SLOT(pushButton_SWrite()));
	connect(ui.pushButton_SRead, SIGNAL(clicked()), this, SLOT(pushButton_SRead()));
	connect(ui.pushButton_FWrite, SIGNAL(clicked()), this, SLOT(pushButton_FWrite()));
	connect(ui.pushButton_FRead, SIGNAL(clicked()), this, SLOT(pushButton_FRead()));
	connect(ui.pushButton_CoilWrite, SIGNAL(clicked()), this, SLOT(pushButton_CoilWrite()));
	connect(ui.pushButton_CoilRead, SIGNAL(clicked()), this, SLOT(pushButton_CoilRead()));

	connect(ui.pushButton_test1, SIGNAL(clicked()), this, SLOT(pushButton_test1()));
	connect(ui.pushButton_test2, SIGNAL(clicked()), this, SLOT(pushButton_test2()));
	connect(ui.pushButton_Write, SIGNAL(clicked()), this, SLOT(pushButton_Write()));
	connect(ui.pushButton_clear1, SIGNAL(clicked()), this, SLOT(pushButton_clear1()));
	connect(ui.pushButton_Read, SIGNAL(clicked()), this, SLOT(pushButton_Read()));
	connect(ui.pushButton_clear2, SIGNAL(clicked()), this, SLOT(pushButton_clear2()));
	
	pushButton_connect();
}

TCIP::~TCIP()
{
	modbus_close(modbus);
    modbus_free(modbus);
}

void TCIP::pushButton_connect()
{
	int nOk = -1;
    modbus = modbus_new_tcp("127.0.0.1", 502);  //由于是tcp client连接，在同一个程序中相同的端口可以连接多次。
    nOk = modbus_set_slave(modbus, 1);  //从机地址
    nOk = modbus_connect(modbus);
	if (nOk == 0)
	{
		ui.pushButton_connect->setText("opened");
	}

	struct timeval t;
    t.tv_sec = 1;
    t.tv_usec= 0;   //设置modbus超时时间为1000毫秒，注意：经测试，如果没有成功建立tcp连接，则该设置无效。
    nOk = modbus_set_response_timeout(modbus, t.tv_sec,t.tv_usec);

}

void TCIP::pushButton_IWrite()
{
	int regs = modbus_write_register(modbus, ui.lineEdit_addres->text().toInt(), ui.lineEdit_dValue->text().toShort());
}
void TCIP::pushButton_IRead()
{
	uint16_t tab_reg[1] = {0};	
    int regs = modbus_read_registers(modbus, ui.lineEdit_addres->text().toInt(), 1, tab_reg);
	ui.lineEdit_dValue->setText(QString::number((short)tab_reg[0]));
}
void TCIP::pushButton_SWrite()
{

}
void TCIP::pushButton_SRead()
{

}
void TCIP::pushButton_FWrite()
{
	uint16_t tab_reg[2] = {0};
	int addres = ui.lineEdit_addres->text().toInt();
	float value =  ui.lineEdit_dValue->text().toFloat();

	modbus_set_float_dcba(value,tab_reg);
	int regs = modbus_write_registers(modbus, addres,2,tab_reg);
}
void TCIP::pushButton_FRead()
{
	uint16_t tab_reg[2] = {0};	
    int regs = modbus_read_registers(modbus, ui.lineEdit_addres->text().toInt(), 2, tab_reg);
	float value = modbus_get_float_dcba(tab_reg);

	ui.lineEdit_dValue->setText(QString::number(value,10,4));
}
void TCIP::pushButton_CoilWrite()
{
	int addres = ui.lineEdit_addres->text().toInt();
	int value =  ui.lineEdit_dValue->text().toInt();
	int regs = modbus_write_bit(modbus, addres, value);
}
void TCIP::pushButton_CoilRead()
{
	uint8_t tab_reg[1] = {0};
	int regs = modbus_read_bits(modbus, ui.lineEdit_addres->text().toInt(), 1, tab_reg);
	int value  = tab_reg[0];
	ui.lineEdit_dValue->setText(QString::number(value));
}

void TCIP::pushButton_test1()
{
	int addres = 0;
	float value = 123.123;
	uint16_t tab_reg[2] = {0};

	for (size_t i = 0; i < 30; i++)
	{
		modbus_set_float_dcba(value + i ,tab_reg);
		int regs = modbus_write_registers(modbus, i*2,2,tab_reg);
	}
}
void TCIP::pushButton_test2()
{
	int addres = 0;
	float value = -895.123;
	uint16_t tab_reg[2] = {0};

	for (size_t i = 0; i < 30; i++)
	{
		modbus_set_float_dcba(value + i ,tab_reg);
		int regs = modbus_write_registers(modbus, i*2,2,tab_reg);
	}
}
void TCIP::pushButton_Write()
{
	int type = ui.comboBox_2->currentIndex();
	if (type == 0)
	{
		uint8_t tab_reg[1024] = {0};
		QString str1 = ui.textEdit_Write->toPlainText();
		QStringList tempStrList = str1.split(QRegExp("[, \t\n;|]+")); //这个是分割 逗号、空格、tab、分号,'|','+'的
		for (size_t i = 0; i < tempStrList.size(); i++)
		{
			tab_reg[i] = tempStrList[i].toInt();
		}

		int addres = ui.lineEdit_addres_2->text().toInt();
		int count =  ui.lineEdit_count->text().toInt();
		int regs = modbus_write_bits(modbus, addres,count, tab_reg);
	}
	else
	{
		uint16_t tab_reg[1024] = {0};
		QString str1 = ui.textEdit_Write->toPlainText();
		QStringList tempStrList = str1.split(QRegExp("[, \t\n;|]+")); //这个是分割 逗号、空格、tab、分号,'|','+'的
		for (size_t i = 0; i < tempStrList.size(); i++)
		{
			uint16_t t_reg[2] = {0};
			modbus_set_float_dcba(tempStrList[i].toFloat(),t_reg);
			tab_reg[2*i] = t_reg[0];
			tab_reg[2*i + 1] = t_reg[1];
		}

		int addres = ui.lineEdit_addres_2->text().toInt();
		int count =  ui.lineEdit_count->text().toInt();
		int regs = modbus_write_registers(modbus, addres,count*2,tab_reg);
	}

}
void TCIP::pushButton_clear1()
{
	ui.textEdit_Write->clear();
}
void TCIP::pushButton_Read()
{
	ui.textEdit_Read->clear();
	int type = ui.comboBox_2->currentIndex();
	if (type == 0)
	{
		uint8_t tab_reg[1024] = {0};
		int addres = ui.lineEdit_addres_2->text().toInt();
		int count =  ui.lineEdit_count->text().toInt();
		int regs = modbus_read_bits(modbus, addres, count, tab_reg);

		for (size_t i = 0; i < count; i++)
		{
			int value  = tab_reg[i];
			ui.textEdit_Read->append(QString::number(value));
		}
	}
	else
	{
		uint16_t tab_reg[1024] = {0};

		int addres = ui.lineEdit_addres_2->text().toInt();
		int count =  ui.lineEdit_count->text().toInt();
		int regs = modbus_read_registers(modbus, addres, count*2, tab_reg);

		for (size_t i = 0; i < count; i++)
		{
			uint16_t t_reg[2] = {0};
			t_reg[0] = tab_reg[2*i];
			t_reg[1] = tab_reg[2*i + 1];
			float value = modbus_get_float_dcba(t_reg);
			ui.textEdit_Read->append(QString::number(value,10,4));
		}	
	}
}
void TCIP::pushButton_clear2()
{
	ui.textEdit_Read->clear();
}
