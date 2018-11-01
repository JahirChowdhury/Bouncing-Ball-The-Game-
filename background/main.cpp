#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void fullsky()
{
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(255, 228, 205);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);

    glEnd();
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	fullsky();
	glLoadIdentity();


//----------------------Front-------------------

    glBegin(GL_POLYGON);
    glColor3ub(125, 105, 105);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-0.7f,-1.0f);
    glVertex2f(-0.7f,-0.4f);
    glVertex2f(-1.0f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 115, 105);
    glVertex2f(-0.75f,-0.4f);
    glVertex2f(-0.4f,-0.4f);
    glVertex2f(-0.4f,-0.05f);
    glVertex2f(-0.75f,-0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 115, 105);
    glVertex2f(-0.7f,-1.0f);
    glVertex2f(-0.4f,-1.0f);
    glVertex2f(-0.4f,-0.4f);
    glVertex2f(-0.7f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 135);
    glVertex2f(-0.4f,-1.0f);
    glVertex2f(-0.2f,-1.0f);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.4f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 125, 105);
    glVertex2f(-0.2f,-1.0f);
    glVertex2f(-0.0f,-1.0f);
    glVertex2f(-0.0f,-0.5f);
    glVertex2f(-0.2f,-0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(135, 105, 105);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(0.25f,-1.0f);
    glVertex2f(0.25f,-0.3f);
    glVertex2f(0.0f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(116, 105, 105);
    glVertex2f(0.25f,-1.0f);
    glVertex2f(0.5f,-1.0f);
    glVertex2f(0.5f,-0.55f);
    glVertex2f(0.25f,-0.55f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 116);
    glVertex2f(0.5f,-1.0f);
    glVertex2f(0.65f,-1.0f);
    glVertex2f(0.65f,-0.25f);
    glVertex2f(0.5f,-0.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 125, 105);
    glVertex2f(0.65f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,-0.35f);
    glVertex2f(0.65f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 125, 105);
    glVertex2f(0.8f,-0.35f);
    glVertex2f(1.0f,-0.35f);
    glVertex2f(1.0f,-0.15f);
    glVertex2f(0.8f,-0.15f);
    glEnd();

//----------Window-------------------

     glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.95f,-0.55f);
    glVertex2f(-0.9f,-0.55f);
    glVertex2f(-0.9f,-0.45f);
    glVertex2f(-0.95f,-0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.95f,-0.7f);
    glVertex2f(-0.9f,-0.7f);
    glVertex2f(-0.9f,-0.6f);
    glVertex2f(-0.95f,-0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.95f,-0.85f);
    glVertex2f(-0.9f,-0.85f);
    glVertex2f(-0.9f,-0.75f);
    glVertex2f(-0.95f,-0.75f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.85f,-0.45f);
    glVertex2f(-0.85f,-0.55f);
    glVertex2f(-0.8f,-0.55f);
    glVertex2f(-0.8f,-0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.85f,-0.6f);
    glVertex2f(-0.85f,-0.7f);
    glVertex2f(-0.8f,-0.7f);
    glVertex2f(-0.8f,-0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.85f,-0.75f);
    glVertex2f(-0.85f,-0.85f);
    glVertex2f(-0.8f,-0.85f);
    glVertex2f(-0.8f,-0.75f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.65f,-0.1f);
    glVertex2f(-0.65f,-0.2f);
    glVertex2f(-0.6f,-0.2f);
    glVertex2f(-0.6f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.65f,-0.3f);
    glVertex2f(-0.65f,-0.4f);
    glVertex2f(-0.6f,-0.4f);
    glVertex2f(-0.6f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.65f,-0.5f);
    glVertex2f(-0.65f,-0.6f);
    glVertex2f(-0.6f,-0.6f);
    glVertex2f(-0.6f,-0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.65f,-0.7f);
    glVertex2f(-0.65f,-0.8f);
    glVertex2f(-0.6f,-0.8f);
    glVertex2f(-0.6f,-0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.55f,-0.1f);
    glVertex2f(-0.55f,-0.2f);
    glVertex2f(-0.45f,-0.2f);
    glVertex2f(-0.45f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.55f,-0.3f);
    glVertex2f(-0.55f,-0.4f);
    glVertex2f(-0.45f,-0.4f);
    glVertex2f(-0.45f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.55f,-0.5f);
    glVertex2f(-0.55f,-0.6f);
    glVertex2f(-0.45f,-0.6f);
    glVertex2f(-0.45f,-0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(-0.55f,-0.7f);
    glVertex2f(-0.55f,-0.8f);
    glVertex2f(-0.45f,-0.8f);
    glVertex2f(-0.45f,-0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.05f,-0.33f);
    glVertex2f(0.05f,-0.43f);
    glVertex2f(0.1f,-0.43f);
    glVertex2f(0.1f,-0.33f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.05f,-0.53f);
    glVertex2f(0.05f,-0.63f);
    glVertex2f(0.1f,-0.63f);
    glVertex2f(0.1f,-0.53f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.05f,-0.73f);
    glVertex2f(0.05f,-0.83f);
    glVertex2f(0.1f,-0.83f);
    glVertex2f(0.1f,-0.73f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.15f,-0.33f);
    glVertex2f(0.15f,-0.43f);
    glVertex2f(0.2f,-0.43f);
    glVertex2f(0.2f,-0.33f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.15f,-0.53f);
    glVertex2f(0.15f,-0.63f);
    glVertex2f(0.2f,-0.63f);
    glVertex2f(0.2f,-0.53f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.15f,-0.73f);
    glVertex2f(0.15f,-0.83f);
    glVertex2f(0.2f,-0.83f);
    glVertex2f(0.2f,-0.73f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.7f,-0.4f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.75f,-0.5f);
    glVertex2f(0.75f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.7f,-0.6f);
    glVertex2f(0.7f,-0.7f);
    glVertex2f(0.75f,-0.7f);
    glVertex2f(0.75f,-0.6f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.7f,-0.8f);
    glVertex2f(0.7f,-0.9f);
    glVertex2f(0.75f,-0.9f);
    glVertex2f(0.75f,-0.8f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.85f,-0.2f);
    glVertex2f(0.85f,-0.3f);
    glVertex2f(0.95f,-0.3f);
    glVertex2f(0.95f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.85f,-0.4f);
    glVertex2f(0.85f,-0.5f);
    glVertex2f(0.95f,-0.5f);
    glVertex2f(0.95f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.85f,-0.6f);
    glVertex2f(0.85f,-0.7f);
    glVertex2f(0.95f,-0.7f);
    glVertex2f(0.95f,-0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 215, 0);
    glVertex2f(0.85f,-0.8f);
    glVertex2f(0.85f,-0.9f);
    glVertex2f(0.95f,-0.9f);
    glVertex2f(0.95f,-0.8f);
    glEnd();



//---------------Shadow-------------------

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(-1.0f,-0.4f);
    glVertex2f(-0.9f,-0.4f);
    glVertex2f(-0.9f,0.2f);
    glVertex2f(-1.0f,0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(-0.9f,-0.4f);
    glVertex2f(-0.85f,-0.4f);
    glVertex2f(-0.85f,0.05f);
    glVertex2f(-0.9f,0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(-0.7f,-0.05f);
    glVertex2f(-0.5f,-0.05f);
    glVertex2f(-0.5f,0.1f);
    glVertex2f(-0.7f,0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(-0.4f,-0.1f);
    glVertex2f(-0.25f,-0.1f);
    glVertex2f(-0.25f,-0.05f);
    glVertex2f(-0.4f,-0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(-0.43f,-0.05f);
    glVertex2f(-0.25f,-0.05f);
    glVertex2f(-0.25f,0.05f);
    glVertex2f(-0.43f,0.05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.3f,0.05f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.38f,0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(0.05f,-0.3f);
    glVertex2f(0.2f,-0.3f);
    glVertex2f(0.2f,0.5f);
    glVertex2f(0.05f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(0.25f,-0.3f);
    glVertex2f(0.25f,-0.55f);
    glVertex2f(0.5f,-0.55f);
    glVertex2f(0.5f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(0.2f,-0.3f);
    glVertex2f(0.5f,-0.3f);
    glVertex2f(0.5f,0.2f);
    glVertex2f(0.2f,0.2f);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(0.65f,-0.35f);
    glVertex2f(0.8f,-0.35f);
    glVertex2f(0.8f,-0.15f);
    glVertex2f(0.65f,-0.15f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(0.65f,-0.15f);
    glVertex2f(1.0f,-0.15f);
    glVertex2f(1.0f,0.15f);
    glVertex2f(0.65f,0.15f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(211,211,211);
    glVertex2f(0.8f,0.15f);
    glVertex2f(1.0f,0.15f);
    glVertex2f(1.0f,0.4f);
    glVertex2f(0.8f,0.4f);
    glEnd();

	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(1000,800);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
