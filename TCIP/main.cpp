#include "tcip.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TCIP w;
	w.show();
	return a.exec();
}
