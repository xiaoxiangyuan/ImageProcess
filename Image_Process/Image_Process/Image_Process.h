#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Image_Process.h"

class Image_Process : public QMainWindow
{
	Q_OBJECT

public:
	Image_Process(QWidget *parent = Q_NULLPTR);

private:
	Ui::Image_ProcessClass ui;
};
