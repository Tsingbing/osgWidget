#include "osgwidget.h"

osgWidget::osgWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

osgWidget::~osgWidget()
{

}
