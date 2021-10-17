#ifndef OPENGLMAINWND_H
#define OPENGLMAINWND_H

#include <QMainWindow>
namespace Ui {class COpenGLMainWnd;};

class COpenGLMainWnd : public QMainWindow
{
	Q_OBJECT

public:
	COpenGLMainWnd(QWidget *parent = 0);
	~COpenGLMainWnd();

private:
	Ui::COpenGLMainWnd *ui;
};

#endif // OPENGLMAINWND_H
