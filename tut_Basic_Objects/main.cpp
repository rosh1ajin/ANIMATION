#include "GL/freeglut.h"
#include "ctime"
#include <time.h>
#include <iostream>
#include <array>
#include <cmath>
#include <cstdlib>
#include "Draw.h"
#include "Figure.h"
#include "Draw.hpp"
#define _USE_MATH_DEFINES



Figure f = { .0, .0 };
Figure b = { .0, .0 };
Figure f2 = { .0, -1.0 };
Figure f3 = { .0, -2.0 };
Figure f4 = { .0, -2.0 };
Figure f5 = { .0, -2.0 };
Figure f6 = { .0, -2.0 };
Figure b4 = { .0, -2.0 };
Figure s = { .0, .0 };
Figure s1 = { .0, -1.0 };
Figure o = { .0, .0 };
Figure o2 = { .0, .0 };
Figure o1 = { 0.4, -0.6 };
Figure B = { .0, .0 };
float SpeedY = 0.0051f;
float CoordY = 0.000001f;
float SpeedX = 0.0051f;


void FirstBackground() {

	glColor3ub(18, 143, 196);
	glBegin(GL_QUADS); // небо
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

	glEnd();
	glPopMatrix();

	glBegin(GL_QUADS); // земля
	glColor3ub(124, 252, 0);
	glVertex2f(-2, -2);
	glColor3ub(124, 252, 0);
	glVertex2f(-2, -0.5);
	glColor3ub(124, 252, 0);
	glVertex2f(2, -0.5);
	glColor3ub(124, 252, 0);
	glVertex2f(2, -2);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2f(-1, -1.0);//LvN (X Y)
	glVertex2f(-1, -0.5);//Top
	glVertex2f(0.0, -1.0);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2f(0, -1.0);//LvN (X Y)
	glVertex2f(1, -0.5);//Top
	glVertex2f(1, -1.0);//PrN
	glEnd();







	glEnd();
}



void SecondBackground() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(18, 143, 196);
	glVertex2f(-2, 1);
	glColor3ub(18, 143, 196);
	glVertex2f(2, 1);
	glColor3ub(18, 143, 196);
	glVertex2f(2, -2);
	glColor3ub(18, 143, 196);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();

}



void ThirdBackground() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(0, 104, 139);
	glVertex2f(-2, 1);
	glColor3ub(0, 104, 139);
	glVertex2f(2, 1);
	glColor3ub(0, 104, 139);
	glVertex2f(2, -2);
	glColor3ub(0, 104, 139);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();

}



void FourthBackground() {
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(20, 20, 20);
	glVertex2f(-2, 1);
	glColor3ub(20, 20, 20);
	glVertex2f(2, 1);
	glColor3ub(20, 20, 20);
	glVertex2f(2, -2);
	glColor3ub(20, 20, 20);
	glVertex2f(-2, -2);



	glEnd();
	glFlush();
	glPopMatrix();
}



void FifthBackground() {

	glColor3ub(20, 20, 20);
	glBegin(GL_QUADS); // небо
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

	glEnd();
	glPopMatrix();

	glBegin(GL_QUADS); // земля
	glColor3ub(122, 122, 122);
	glVertex2f(-2, -2);
	glColor3ub(122, 122, 122);
	glVertex2f(-2, -0.5);
	glColor3ub(122, 122, 122);
	glVertex2f(2, -0.5);
	glColor3ub(122, 122, 122);
	glVertex2f(2, -2);
	glEnd();
	
	
	//
	

	//



	glEnd();
	glPopMatrix();

	glEnd();
}



void animate(int value) {
	glutPostRedisplay();
	glutTimerFunc(1 / 60, animate, 0);

}



void drawAnima() {
	FirstBackground();
	f.pos.y += SpeedY;
	B.pos.y += SpeedY;
	b.pos.x += SpeedX;


	DrawSpaceboard(f);
	Oblako(o);
	if (f.pos.y > 2) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		SecondBackground();
		Oblako(o);
		Oblako(o1);
		f2.pos.y += SpeedY;
		DrawSpaceboard(f2);
		if (f2.pos.y > 2) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			ThirdBackground();
			f3.pos.y += SpeedY;
			DrawSpaceboard(f3);
			if (f3.pos.y > 2) {
				FourthBackground();
				f4.pos.y += SpeedY;
				DrawSpaceboard(f4);
				if (f4.pos.y > 0) {
					FifthBackground();
					f5.pos.y += SpeedY;
					
						
		

				}

			}
		}
	}
}



int main(int argc, char* argv[]) {
	srand(0);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Rocket animation");
	glutDisplayFunc(renderScene);
	glutTimerFunc(1000 / 60, animate, 1);

	glutMainLoop();

	return 0;

}



void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	FirstBackground();
	SecondBackground();
	ThirdBackground();
	FourthBackground();
	FifthBackground();
	Oblako(o);
	DrawSpaceboard(f);
	drawAnima();
	glutSwapBuffers();

}