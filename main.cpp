#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <math.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<windows.h>
#include<mmsystem.h>
#include"star.h"
#include"ball.h"
#include"gameOver.h"
#include"menu.h"

void update(int);
using  namespace std;
static int score;
static int life= 1;
float _angle = 0.0;
float px = 7.0;
int timer = 10;
//float _cameraAngle = 0.0;
float _ang_tri = 0.0;
float posx = -2.20;
float posy = 0;
float dposx1=2.4,dposx2=4,dposx3=5.5;
float dposy1=-2.0,dposy2=0,dposy3=1.5;//= 2.9;

bool gameover = false;
bool playgame = false;
bool gamemenu = true;


Star star;
Ball ball;
GameOverScreen gameOverScreen;
Menu menu;

float RandomFloat(float min, float max)
{
    float r = (float)rand() / (float)RAND_MAX;
    return min + r * (max - min);
}
void genX1Y1()
{
    dposy1 = RandomFloat(-2.0,-1.5);
    dposx1 = RandomFloat(2.5,2.9);
}
void genX2Y2()
{
    dposy2 = RandomFloat(-1,2.0);
    dposx2 = RandomFloat(4.0,5.0);
}
void genX3Y3()
{
    dposy3 = RandomFloat(1.2,2.2);
    dposx3 = RandomFloat(6.0,7.0);
}


//Initializes 3D rendering
void initRendering()
{
	glEnable(GL_DEPTH_TEST);
}
void handleResize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}
//Draws the 3D scene
void drawScene()
{
    glClearColor(0.000, 0.000, 0.1, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	//glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0);//Move forward 7 unit
    glColor3f(1,1,1);
    //menu.createMenu();
    if(gameover)
    {
        //gameOverScreen.drawGameOverScreen();
        playgame = false;
        //cout<<"Enter Player Name:";
        ofstream myfile;
        myfile.open ("score.txt");
        myfile << score;
        myfile.close();
        ifstream scorefromfile("score.txt");
        string myscore;
        getline(scorefromfile, myscore);
        const char *ch = myscore.c_str();

        scorefromfile.close();
        glColor3f(1.0,0.0, 0.0);
        gameOverScreen.drawGameOverScreen();
        glColor3f(0.5,0.2, 0.8);
        gameOverScreen.drawText("Your Score is:  ", 16, -0.33, 0.2);
        glColor3f(1.0,1.0, 1.0);
        gameOverScreen.drawText(ch, 2, 0.15, 0.2);
        gameOverScreen.drawText("Restart? Press R", 16, -0.33, -0.40);


    }
    if(gamemenu)
    {
        menu.createMenu();
    }
    if(playgame)
    {
        glColor3f(1,0,0);
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(posx, posy, 0.0);
        ball.drawBall();
        glPopMatrix();

        //falling objects
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(dposx1, dposy1, 0.0);
        star.drawStar();
        glPopMatrix();

        //glColor3f(1.0,1,0);
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(dposx2, dposy2, 0.0);
        star.drawStar();
        glPopMatrix();

        //glColor3f(1.0,1,0);
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(dposx3, dposy3, 0.0);
        star.drawStar();
        glPopMatrix();
    }
        glEnd();
        glutSwapBuffers();

}

void SpecialInput(int key, int x, int y){
    if(key == GLUT_KEY_UP){
        posy+= .5;
        PlaySound("bounce.wav", NULL, SND_ASYNC|SND_FILENAME);
    }
    if(key == GLUT_KEY_DOWN ){
        posy-=.5;
        PlaySound("bounce.wav", NULL, SND_ASYNC|SND_FILENAME);
    }
}
void update(int value)
{
    if(playgame)
    {
        cout<<"SCORE: "<<score<<endl;

        float posPosy,negPosy;
        posPosy = posy+.4;
        negPosy = posy-.4;
        if((dposy1>=negPosy && dposy1<= posPosy )&& (dposx1<=-2.2 && dposx1>-2.23) )
        {
            cout<<"COLLISSION DETECTED :D dpos 1"<<endl;
            //score++;
            life--;
            genX1Y1();

        }
        else if(dposx1<=-2.2 && dposx1>-2.23)
        {
            cout<<"one life gone :D dpos 1  "<<endl;
            //life--;
            score++;
        }
        if((dposy2>=negPosy && dposy2<= posPosy )&& (dposx2<=-2.2 && dposx2>-2.23) )
        {
            cout<<"COLLISSION DETECTED :D dpos2"<<endl;
            //score++;
            life--;
            genX2Y2();

        }
        else if(dposx2<=-2.2 && dposx2>-2.23)
        {
            cout<<"one life gone :D dpos 2 "<<endl;
            //life--;
            score++;
        }
        if((dposy3>=negPosy && dposy3<= posPosy )&& (dposx3<=-2.2 && dposx3>-2.23) )
        {
            cout<<"COLLISSION DETECTED :D dpos 3"<<endl;
            //score++;
            life--;
            genX3Y3();

        }
        else if(dposx3<=-2.2 && dposx3>-2.23)
        {
            cout<<"one life gone :D  dpos 3 "<<endl;
            //life--;
            score++;
        }

        if(dposx1< -5.5)
        {
            genX1Y1();
        }
        if(dposx2<-5.5)
        {
            genX2Y2();
        }
        if(dposx3<-5.5)
        {
            genX3Y3();
        }
        if(life == 0)
        {
            gameover = true;
        }

        dposx1-=.03;
        dposx2-=.03;
        dposx3-=.03;
    }

    //star.StarUpdate();
	glutPostRedisplay();
	glutTimerFunc(timer, update, 0);
}

void mouseClick(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        //cout<<(double)x<< "  "<<(double)y<<endl;
        if(x >= 245 && x <=340 && y >=285 && y <=313)
            {
                exit(0);
            }
        else if(x >= 245 && x <=340 && y >=205 && y <=235)
            {
                gamemenu = false;
                playgame= true;
            }
    }
    if(playgame)
    {
        if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        {
            posy+= .5;
            PlaySound("bounce.wav", NULL, SND_ASYNC|SND_FILENAME);
        }
        if(button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
        {
            posy-=.5;
            PlaySound("bounce.wav", NULL, SND_ASYNC|SND_FILENAME);
        }
    }
}
void Keyboard(unsigned char key, int x, int y)
{
    if(key=='R'|| key=='r'){
        life= 1;
        score = 0;
        genX1Y1();
        genX2Y2();
        genX3Y3();
        //genLifeX1Y1();
        //menu.createMenu();
        gameover= false;
        playgame = true;
    }

}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	//glutInitWindowSize(800, 600);
	//glutInitWindowPosition(500,100);

	glutInitWindowSize(600, 700);
    glutInitWindowPosition(500,00);

	//Create the window
	glutCreateWindow("Ball");

	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);
	glutTimerFunc(15, update, 0); //Add a timer
	glutSpecialFunc(SpecialInput); // for arrow keys
    glutKeyboardFunc(Keyboard);
    glutMouseFunc(mouseClick);
    PlaySound("POL.wav", NULL, SND_ASYNC|SND_FILENAME | SND_LOOP);
    //init();

	glutMainLoop();


	return 0;
}
