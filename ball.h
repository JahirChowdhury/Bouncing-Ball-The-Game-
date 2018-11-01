#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
//#include"nightSky.h"

class Ball
{
public:
    float _angle = 0.0;
    float _cameraAngle = 0.0;
    float _ang_tri = 0.0;

    void drawBall()
    {
        glPushMatrix();
            glRotatef(-_ang_tri,1.0, 0.0, 0.0);
			glColor4ub(255,0,0,0);
            //glColor3f(0.0, 0.0, 1.0);//(R,G,B)
            glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50 ;
                    float r=0.15;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
            glEnd();
        glPopMatrix();
    }

    void drawComet()
	{
		glPushMatrix();
			glColor3f(1.000, 1.000, 1.000);
			glPointSize(2.0);
			glBegin(GL_POINTS);
				glVertex3f(0.0, 0.0, 0.0);
			glEnd();
		glPopMatrix();
	}

    void BallUpdate()
    {
        _angle += 2.0f;
        if (_angle > 360) {
            _angle -= 360;
        }
        _ang_tri += 2.0f;
        if (_ang_tri > 360) {
            _ang_tri -= 360;
        }
    }
};









