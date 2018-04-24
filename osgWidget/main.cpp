#include "osgwidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	osgWidget w;
	w.show();
	return a.exec();
}
