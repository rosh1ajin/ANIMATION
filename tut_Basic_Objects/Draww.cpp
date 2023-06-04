#define _USE_MATH_DEFINES
#include "Draw.hpp"
#include "Figure.h"
#include "GL/freeglut.h"
#include <cmath>



void DrawSpaceboard(Figure& f) { //Корабль
	glPushMatrix();
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



void Oblako(Figure& o) { //части справа налево, снизу вверх

	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x + 0.5, y + 0.7);
	}
	glEnd();

	float x1, y1;
	float cnt1 = 30;
	float l1 = 0.09;
	float a1 = M_PI * 2 / cnt1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.4, 0.7);
	for (int i = -1; i < cnt1; i++) {
		x1 = sin(a1 * i) * l1;
		y1 = cos(a1 * i) * l1;
		glVertex2f(x1 + 0.4, y1 + 0.7);
	}
	glEnd();

	float x2, y2;
	float cnt2 = 30;
	float l2 = 0.08;
	float a2 = M_PI * 2 / cnt2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt2; i++) {
		x2 = sin(a2 * i) * l2;
		y2 = cos(a2 * i) * l2;
		glVertex2f(x2 + 0.3, y2 + 0.7);
	}
	glEnd();

	float x3, y3;
	float cnt3 = 30;
	float l3 = 0.07;
	float a3 = M_PI * 2 / cnt3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.45, 0.8);
	for (int i = -1; i < cnt3; i++) {
		x3 = sin(a3 * i) * l3;
		y3 = cos(a3 * i) * l3;
		glVertex2f(x3 + 0.45, y3 + 0.8);
	}
	glEnd();

	float x4, y4;
	float cnt4 = 30;
	float l4 = 0.08;
	float a4 = M_PI * 2 / cnt4;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.36, 0.77);
	for (int i = -1; i < cnt4; i++) {
		x4 = sin(a4 * i) * l4;
		y4 = cos(a4 * i) * l4;
		glVertex2f(x4 + 0.36, y4 + 0.77);
	}
	glEnd();
	glPopMatrix();

	float x5, y5;
	float cnt5 = 30;
	float l5 = 0.07;
	float a5 = M_PI * 2 / cnt3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.45, 0.8);
	for (int i = -1; i < cnt3; i++) {
		x3 = sin(a3 * i) * l3;
		y3 = cos(a3 * i) * l3;
		glVertex2f(x3 + 0.45, y3 + 0.8);
	}
	glEnd();

}