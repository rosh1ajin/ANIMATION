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
Figure f3 = { .0, -1.0 };
Figure f4 = { .0, -1.0 };
Figure f5 = { .0, 1.5 };
Figure s = { .0, .0 };
Figure s1 = { .0, -1.0 };
Figure o = { .0, .0 };
Figure o2 = { .0, .0 };
Figure o1 = { 0.4, -0.6 };
Figure B = { .0, .0 };
float SpeedY = 0.01f;
float CoordY = 0.000001f;
float SpeedX = 0.002f;
float CoordX = 0.000001f;



void drawSun(float radius, float x, float y) {
	const float PI = 3.14159265358979323846;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(222, 177, 0);
	glVertex2f(x, y);
	for (int i = 0; i <= 360; i++) {
		glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
	}
	glEnd();
}



void drawEarth(float radius, float x, float y) {
	const float PI = 3.14159265358979323846;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 177, 177);
	glVertex2f(x, y);
	for (int i = 0; i <= 360; i++) {
		glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
	}
	glEnd();
}



void drawKrater(float radius, float x, float y) {
	const float PI = 3.14159265358979323846;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(44, 44, 44);
	glVertex2f(x, y);
	for (int i = 0; i <= 360; i++) {
		glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
	}
	glEnd();
}



void drawMoon(float radius, float x, float y) {
	const float PI = 3.14159265358979323846;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(155,155, 155);
	glVertex2f(x, y);
	for (int i = 0; i <= 360; i++) {
		glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
	}
	glEnd();
}



float randFloat() {
	return (float)rand() / RAND_MAX;
}



void stars() {
	glLoadIdentity();
	
	glColor3ub(255, 255, 255);

	glBegin(GL_POINTS);
		
	int numPoints = 100;
	for (int i = 0; i < numPoints; i++) {
		float x = randFloat() * 2 - 1;
		float y = randFloat() * 2 - 1;

		glVertex2f(x, y);
	}

	glEnd();
	glFlush();
}



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



	glBegin(GL_QUADS); // домик
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(-0.25, -0.5);
	glVertex2f(-0.25, -0.3);
	glVertex2f(-0.35, -0.3);
	glVertex2f(-0.35, -0.5);
	glEnd();



	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.3f, 0.0f);
	glVertex2f(-0.37, -0.3);//LvN (X Y)
	glVertex2f(-0.3, -0.25);//Top
	glVertex2f(-0.23, -0.3);//PrN
	glEnd();



	glBegin(GL_QUADS); // домик
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(0.25, -0.5);
	glVertex2f(0.25, -0.3);
	glVertex2f(0.35, -0.3);
	glVertex2f(0.35, -0.5);
	glEnd();



	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.3f, 0.0f);
	glVertex2f(0.67, -0.3);//LvN (X Y)
	glVertex2f(0.6, -0.25);//Top
	glVertex2f(0.53, -0.3);//PrN
	glEnd();


	glBegin(GL_QUADS); // домик
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(0.25, -0.5);
	glVertex2f(0.25, -0.3);
	glVertex2f(0.35, -0.3);
	glVertex2f(0.35, -0.5);
	glEnd();



	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.3f, 0.0f);
	glVertex2f(0.37, -0.3);//LvN (X Y)
	glVertex2f(0.3, -0.25);//Top
	glVertex2f(0.23, -0.3);//PrN
	glEnd();



	glBegin(GL_QUADS); // домик
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(0.65, -0.5);
	glVertex2f(0.65, -0.3);
	glVertex2f(0.55, -0.3);
	glVertex2f(0.55, -0.5);
	glEnd();



	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.3f, 0.0f);
	glVertex2f(0.87, -0.3);//LvN (X Y)
	glVertex2f(0.8, -0.25);//Top
	glVertex2f(0.73, -0.3);//PrN
	glEnd();



	glBegin(GL_QUADS); // домик
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(0.85, -0.5);
	glVertex2f(0.85, -0.3);
	glVertex2f(0.75, -0.3);
	glVertex2f(0.75, -0.5);
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
	}



void animate(int value) {
	glutPostRedisplay();
	glutTimerFunc(1 / 30, animate, 0);

}



void drawAnima() {
	FirstBackground();
	f.pos.y += SpeedY;
	B.pos.y += SpeedY;
	drawSun(0.3, -1, 1);



	DrawSpaceboard(f);
	Oblako(o);
	if (f.pos.y > 2) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		SecondBackground();
		Oblako(o);
		f2.pos.y += SpeedY;
		DrawSpaceboard(f2);
		if (f2.pos.y > 2) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			ThirdBackground();
			stars();
			f3.pos.y += SpeedY;
			DrawSpaceboard(f3);
			if (f3.pos.y > 2) {
				FourthBackground();
				stars();
				drawMoon(0.4, 1, 1);
				drawKrater(0.02, 0.95, 0.86);
				drawKrater(0.02, 0.86, 0.90);
				drawKrater(0.02, 0.8, 0.88);
				drawKrater(0.02, 0.75, 0.75);
				drawKrater(0.02, 0.7, 0.95);
				f4.pos.y += SpeedY;
				f4.pos.x += SpeedX;
				DrawSpaceboard(f4);
				if (f4.pos.y > 2) {
					FifthBackground();
					drawEarth(0.3, 1, 0.8);
					drawSun(0.2, -1, 1);
					drawKrater(0.05, -0.8, -0.8);
					drawKrater(0.05, 0.6, -0.7);
					drawKrater(0.06, -0.6, -0.7);
					drawKrater(0.06, 0.6, -0.7);
					drawKrater(0.04, -0.25, -0.9);
					drawKrater(0.04, 0.3, -0.6);
					stars();
					glPushMatrix();
						if (f5.pos.y > 0)
							f5.pos.y -= SpeedY;
							glPopMatrix();
							DrawSpaceboard(f5);
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
	stars();
	DrawSpaceboard(f);
	drawAnima();
	glutSwapBuffers();

}