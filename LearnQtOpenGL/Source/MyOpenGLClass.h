#ifndef MYOPENGLCLASS_H
#define MYOPENGLCLASS_H

#include <QOpenGLWidget>
#include<QOpenGLFunctions_1_1>

class MyOpenGLClass :
    public QOpenGLWidget
    , protected QOpenGLFunctions_1_1 {
        Q_OBJECT
        
    public:
        MyOpenGLClass ( QWidget* parent );
        ~MyOpenGLClass();
        
    protected:
        virtual void initializeGL();
        virtual void resizeGL ( int w, int h );
        virtual void paintGL();
        
    private:
    
};

#endif // MYOPENGLCLASS_H
