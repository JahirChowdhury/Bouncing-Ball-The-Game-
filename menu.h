#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glu.h>
#include <GL/glut.h>
//#include"nightSky.h"
//#include"nightSky.h"

using  namespace std;

//NightSky nightSky;

class Menu
{
public:
char menu[15] = "Bouncing Ball";
char menuline[20] = "-------------";
char play[6] = "PLAY";
char score[6] = "SCORE";
char quit[6] = "QUIT";

public:
    void drawText(const char *text, int length, float x, float y)
    {
        glMatrixMode(GL_PROJECTION);
        double *matrix = new double[20];
        glGetDoublev(GL_PROJECTION_MATRIX, matrix);
        glLoadIdentity();
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glPushMatrix();
        glLoadIdentity();
        glRasterPos2f(x,y);
        for(int i=0; i<length; i++){
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, (int)text[i]);
        }
        glPopMatrix();
        glMatrixMode(GL_PROJECTION);
        glLoadMatrixd(matrix);
        glMatrixMode(GL_MODELVIEW);

    }
    void createMenu() {

        glPushMatrix();
        glColor3d(0.0,0.5,1.0);
        //nightSky.displaySky();
        glPopMatrix();
        glPushMatrix();
        glBegin(GL_QUADS);
            glColor3d(0.0,1.0,1.0);
            glVertex3f(-1.2, 1.65,0.0);
            glVertex3f(0.80, 1.65,0.0);
            glVertex3f(0.80, 1.28,0.0);
            glVertex3f(-1.2, 1.28,0.0);

        glColor3d(0.0,1.0,0.0);
            glVertex3f(-0.45, 1.2,0.0);
            glVertex3f(0.35, 1.2,0.0);
            glVertex3f(0.35, 0.95,0.0);
            glVertex3f(-0.45, 0.95,0.0);



        glColor3d(1.0,0.0,1.0);
            glVertex3f(-0.45, 0.58,0.0);
            glVertex3f(0.35, 0.58,0.0);
            glVertex3f(0.35, 0.29,0.0);
            glVertex3f(-0.45, 0.29,0.0);

        glEnd();
        glPopMatrix();

        glColor3d(1.0,1.0,1.0);
        glScalef(2,2,2);
        drawText(menu, 15, -0.3, 0.5);
        drawText(menuline, 15, -0.32, 0.45);
        drawText(play, 6, -0.12,0.35);
        drawText(quit, 6, -0.12,0.13);
        //drawText(score, 6, -0.12,0.24 );
    }
};
