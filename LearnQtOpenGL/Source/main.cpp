#include <QtWidgets/QApplication>
#include "OpenGLMainWnd.h"

int main ( int argc, char* argv[] )
{
    QApplication a ( argc, argv );
    COpenGLMainWnd Wnd;
    Wnd.show();
    return a.exec();
}
