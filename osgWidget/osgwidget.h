#ifndef OSGWIDGET_H
#define OSGWIDGET_H

#include <QtWidgets/QWidget>
#include "ui_osgwidget.h"

class osgWidget : public QWidget
{
	Q_OBJECT

public:
	osgWidget(QWidget *parent = 0);
	~osgWidget();

private:
	Ui::osgWidgetClass ui;
};

#endif // OSGWIDGET_H
