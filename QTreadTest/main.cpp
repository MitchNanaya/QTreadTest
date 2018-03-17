#include "QTreadTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTreadTest w;
	w.show();
	return a.exec();
}
