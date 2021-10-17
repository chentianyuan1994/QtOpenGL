#include "MyOpenGLClass.h"

MyOpenGLClass::MyOpenGLClass ( QWidget* parent )
    : QOpenGLWidget ( parent )
{
}

MyOpenGLClass::~MyOpenGLClass()
{
}

void MyOpenGLClass::initializeGL()
{
    bool bInit = initializeOpenGLFunctions();
}

void MyOpenGLClass::resizeGL ( int w, int h )
{
}

void MyOpenGLClass::paintGL()
{
    glClearColor ( 0.2f, 0.3f, 0.3f, 0.5f );
    glClear ( GL_COLOR_BUFFER_BIT );
}
