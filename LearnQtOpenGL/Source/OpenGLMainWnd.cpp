#include "OpenGLMainWnd.h"
#include "ui_OpenGLMainWnd.h"

COpenGLMainWnd::COpenGLMainWnd(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::COpenGLMainWnd();
	ui->setupUi(this);
}

COpenGLMainWnd::~COpenGLMainWnd()
{
	delete ui;
}

