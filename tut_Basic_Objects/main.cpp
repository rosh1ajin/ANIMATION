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
Figure o4 = { .0, .0 };
Figure o2 = { .0, .0 };
Figure o1 = { 0.4, -0.6 };
Figure B = { .0, .0 };
float SpeedY = 0.0015f;
float CoordY = 0.000001f;
float SpeedX = 0.0006f;
float CoordX = 0.000001f;



void DrawSpace(Figure& f) { // орабль
	glPushMatrix();
	glRotatef(-35.0f, 0.0f, 0.0f, 1.0f);
	glTranslatef(f.pos.x, f.pos.y, 0);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex2f(0.06, -0.3); //1(PrVe)//Ground
	glVertex2f(0.06, -0.9); //2(PrNi)
	glVertex2f(-0.06, -0.9); //3(LeNi)
	glVertex2f(-0.06, -0.3); //4(LeVe)
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.06, -0.9);//LvN (X Y)
	glVertex2f(0.0, -0.93);//Top
	glVertex2f(0.06, -0.9);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.05, -0.97);//LvN (X Y)
	glVertex2f(0.0, -0.9);//Top
	glVertex2f(0.05, -0.97);//PrN
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex2f(0.03, -0.3); //1(PrVe)//Ground
	glVertex2f(0.03, -0.9); //2(PrNi)
	glVertex2f(-0.03, -0.9); //3(LeNi)
	glVertex2f(-0.03, -0.3); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.6f, 0.0f);
	glVertex2f(0.025, -0.3); //1(PrVe)//Ground
	glVertex2f(0.025, -0.9); //2(PrNi)
	glVertex2f(-0.025, -0.9); //3(LeNi)
	glVertex2f(-0.025, -0.3); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.65f, 0.0f);
	glVertex2f(0.01, -0.3); //1(PrVe)//Ground
	glVertex2f(0.01, -0.9); //2(PrNi)
	glVertex2f(-0.01, -0.9); //3(LeNi)
	glVertex2f(-0.01, -0.3); //4(LeVe)
	glEnd();

	//prav
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.12, -0.4); //1(PrVe)//Ground
	glVertex2f(0.12, -1); //2(PrNi)
	glVertex2f(0.06, -1); //3(LeNi)
	glVertex2f(0.06, -0.4); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(0.11, -0.4); //1(PrVe)//Ground
	glVertex2f(0.11, -1); //2(PrNi)
	glVertex2f(0.07, -1); //3(LeNi)
	glVertex2f(0.07, -0.4); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(0.1, -0.3); //1(PrVe)//Ground
	glVertex2f(0.1, -1); //2(PrNi)
	glVertex2f(0.08, -1); //3(LeNi)
	glVertex2f(0.08, -0.3); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex2f(0.11, -0.9); //1(PrVe)//Ground
	glVertex2f(0.12, -1); //2(PrNi)
	glVertex2f(0.06, -1); //3(LeNi)
	glVertex2f(0.07, -0.9); //4(LeVe)
	glEnd();

	//lev
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.06, -0.4); //1(PrVe)//Ground
	glVertex2f(-0.06, -1); //2(PrNi)
	glVertex2f(-0.12, -1); //3(LeNi)
	glVertex2f(-0.12, -0.4); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.07, -0.4); //1(PrVe)//Ground
	glVertex2f(-0.07, -1); //2(PrNi)
	glVertex2f(-0.11, -1); //3(LeNi)
	glVertex2f(-0.11, -0.4); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(-0.1, -0.3); //1(PrVe)//Ground
	glVertex2f(-0.1, -1); //2(PrNi)
	glVertex2f(-0.08, -1); //3(LeNi)
	glVertex2f(-0.08, -0.3); //4(LeVe)
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.4f, 0.4f, 0.4f);
	glVertex2f(-0.11, -0.9); //1(PrVe)//Ground
	glVertex2f(-0.12, -1); //2(PrNi)
	glVertex2f(-0.06, -1); //3(LeNi)
	glVertex2f(-0.07, -0.9); //4(LeVe)
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.5f, 0.0f);
	glVertex2f(-0.06, -0.3);//LvN (X Y)
	glVertex2f(0.0, 0.0);//Top
	glVertex2f(0.06, -0.3);//PrN
	glEnd();
	//kprav
	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(0.06, -0.4);//LvN (X Y)
	glVertex2f(0.087, -0.2);//Top
	glVertex2f(0.12, -0.4);//PrN
	glEnd();
	//klev
	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.12, -0.4);//LvN (X Y)
	glVertex2f(-0.087, -0.2);//Top
	glVertex2f(-0.06, -0.4);//PrN
	glEnd();
	//
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.2f, 0.2f);
	glVertex2f(-0.06, -1.12);//LvN (X Y)
	glVertex2f(-0.087, -1);//Top
	glVertex2f(-0.12, -1.12);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.2f, 0.2f);
	glVertex2f(0.06, -1.12);//LvN (X Y)
	glVertex2f(0.087, -1);//Top
	glVertex2f(0.12, -1.12);//PrN
	glEnd();
	////fire left
	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(-0.07, -1.1);//LvN (X Y)
	glVertex2f(-0.06, -1);//Top
	glVertex2f(-0.05, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(-0.08, -1.1);//LvN (X Y)
	glVertex2f(-0.07, -1);//Top
	glVertex2f(-0.06, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(-0.09, -1.1);//LvN (X Y)
	glVertex2f(-0.08, -1);//Top
	glVertex2f(-0.07, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(-0.1, -1.1);//LvN (X Y)
	glVertex2f(-0.09, -1);//Top
	glVertex2f(-0.08, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(-0.11, -1.1);//LvN (X Y)
	glVertex2f(-0.1, -1);//Top
	glVertex2f(-0.09, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(-0.12, -1.1);//LvN (X Y)
	glVertex2f(-0.11, -1);//Top
	glVertex2f(-0.1, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(-0.13, -1.1);//LvN (X Y)
	glVertex2f(-0.12, -1);//Top
	glVertex2f(-0.11, -1.1);//PrN
	glEnd();
	//fire right
	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(0.07, -1.1);//LvN (X Y)
	glVertex2f(0.06, -1);//Top
	glVertex2f(0.05, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(0.08, -1.1);//LvN (X Y)
	glVertex2f(0.07, -1);//Top
	glVertex2f(0.06, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(0.09, -1.1);//LvN (X Y)
	glVertex2f(0.08, -1);//Top
	glVertex2f(0.07, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(0.1, -1.1);//LvN (X Y)
	glVertex2f(0.09, -1);//Top
	glVertex2f(0.08, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(0.11, -1.1);//LvN (X Y)
	glVertex2f(0.1, -1);//Top
	glVertex2f(0.09, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(0.12, -1.1);//LvN (X Y)
	glVertex2f(0.11, -1);//Top
	glVertex2f(0.1, -1.1);//PrN
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.5f, 0.0f);
	glVertex2f(0.13, -1.1);//LvN (X Y)
	glVertex2f(0.12, -1);//Top
	glVertex2f(0.11, -1.1);//PrN
	glEnd();
	glPopMatrix();
}



void drawUFO(float x, float y, float scale) {
	glColor3f(0.5f, 0.5f, 0.5f); 
	glLineWidth(2.0f);

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		float angle = i * 3.1475 / 180.0f;
		float x_pos = cos(angle) * 0.5f * scale + x;
		float y_pos = sin(angle) * 0.2f * scale + y;
		glVertex2f(x_pos, y_pos);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		float angle = i * 3.1475 / 180.0f;
		glColor3f(0.7f, 0.7f, 0.7f);
		float x_pos = cos(angle) * 0.3f * scale + x;
		float y_pos = sin(angle) * 0.1f * scale + y + 0.15f * scale;
		glVertex2f(x_pos, y_pos);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		float angle = i * 3.1475 / 180.0f;
		float x_pos = cos(angle) * 0.3f * scale + x;
		float y_pos = sin(angle) * 0.1f * scale + y - 0.15f * scale;
		glVertex2f(x_pos, y_pos);
	}
	glEnd();
}



void OknoUFO(float radius, float x, float y) {
	const float PI = 3.14159265358979323846;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250, 177, 0);
	glVertex2f(x, y);
	for (int i = 0; i <= 360; i++) {
		glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
	}
	glEnd();
}



void Obladaet1() {
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 0.2); // лева€ верхн€€ точка
	glVertex2f(-0.6, 0.4); // верхн€€ лева€ точка
	glVertex2f(-0.4, 0.3); // верхн€€ права€ точка
	glVertex2f(-0.2, 0.4); // права€ верхн€€ точка
	glVertex2f(0.0, 0.3); // права€ средн€€ точка
	glVertex2f(0.2, 0.4); // права€ нижн€€ точка
	glVertex2f(0.4, 0.3); // нижн€€ права€ точка
	glVertex2f(0.5, 0.1); // нижн€€ центральна€ точка
	glVertex2f(0.4, -0.1); // нижн€€ лева€ точка
	glVertex2f(0.2, -0.2); // лева€ нижн€€ точка
	glVertex2f(0.0, -0.1); // лева€ средн€€ точка
	glVertex2f(-0.2, -0.2); // лева€ верхн€€ точка
	glEnd();
	glFlush();
}



void Obladaet2() {
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_POLYGON);
	glVertex2f(0.0, -0.4);
	glVertex2f(0.4, -0.45);
	glVertex2f(0.4, -0.45);
	glVertex2f(0.6, -0.53);
	glVertex2f(0.3, -0.4);
	glVertex2f(0.2, -0.3);
	glEnd();
	glFlush();
}



void Obladaet3() {
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_POLYGON);
	glVertex2f(-0.1, -0.4);
	glVertex2f(-0.5, -0.45);
	glVertex2f(-0.65, -0.35);
	glVertex2f(-0.7, -0.53);
	glVertex2f(-0.4, -0.4);
	glVertex2f(-0.3, -0.3);
	glEnd();
	glFlush();
}



void Obladaet4() {
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_POLYGON);
	
	glEnd();
	glFlush();
}



void drawCloud() {
	// настройка параметров облачка
	glColor3f(1.0f, 1.0f, 1.0f); // цвет белый
	glLineWidth(3.0f); // толщина линии 3 пиксел€

	// нарисовать круги и эллипсы дл€ создани€ формы облачка
	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(0.5f, -0.5f);
	glEnd();
}


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



void drawSunMoon(float radius, float x, float y) {
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



void drawMoonland(float radius, float x, float y) {
	const float PI = 3.14159265358979323846;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(155, 155, 155);
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

	glBegin(GL_QUADS); // земл€
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
	Obladaet1();
	Obladaet2();
	Obladaet3();
	Obladaet4();
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

		glBegin(GL_QUADS); // земл€
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
		f2.pos.y += SpeedY;
		DrawSpaceboard(f2);
		if (f2.pos.y > 2) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			ThirdBackground();
			stars();
			f3.pos.y += SpeedY;
			DrawSpace(f3);
			if (f3.pos.y > 2) {
				FourthBackground();
				f4.pos.y += SpeedY;
				DrawSpace(f4);
				{
					if (f3.pos.y > 2) {
						FourthBackground();
						stars();
						drawEarth(0.3, -1, -0.8);
						drawMoon(0.4, 1, 1);
						drawKrater(0.02, 0.95, 0.86);
						drawKrater(0.02, 0.86, 0.90);
						drawKrater(0.02, 0.8, 0.88);
						drawKrater(0.02, 0.75, 0.75);
						drawKrater(0.02, 0.7, 0.95);
						f4.pos.y += SpeedY;
						f4.pos.x += SpeedX;
						DrawSpace(f4);
					}
					if (f4.pos.y > 2) {
						glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
						drawMoonland(1.95, 0, -2.3);
						drawUFO(0.0f, 0.0f, 1.0f);
						OknoUFO(0.06, 0, 0.125);
						OknoUFO(0.045, -0.17, 0.15);
						OknoUFO(0.045, 0.17, 0.15);
						OknoUFO(0.06, 0, -0.125);
						OknoUFO(0.045, -0.17, -0.15);
						OknoUFO(0.045, 0.17, -0.15);
						drawEarth(0.3, 1, 0.8);
						drawSunMoon(0.2, -1, 1);
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