#include "Draw.h"
#define _USE_MATH_DEFINES 
#include <cmath>
#include <math.h>
#include <array>
#include <ctime>

void Polya_Nebo(void) {
	glBegin(GL_QUAD_STRIP); //������� ����
	glColor3ub(200, 100, 0);
		glVertex2f(-1, -0.2);
	glColor3ub(200, 100, 0);
		glVertex2f(-1, -1);
	glColor3ub(200, 200, 0);
		glVertex2f(1, 0.2);
	glColor3ub(200, 200, 0);
		glVertex2f(1, -1);
	glEnd();

	glBegin(GL_POLYGON); // ����
	glColor3ub(125, 250, 255);
		glVertex2f(0, 1);
	glColor3ub(125, 250, 255);
		glVertex2f(-1, 1);
	glColor3ub(125, 250, 255);
		glVertex2f(-1, 0.5);
	glColor3ub(125, 250, 255);
		glVertex2f(0.5, 0.1);
	glColor3ub(125, 250, 255);
		glVertex2f(1, 0.2);
	glColor3ub(125, 250, 255);
		glVertex2f(1, 1);
	glEnd();

	glBegin(GL_TRIANGLES); // ������� ����
	glColor3ub(200, 200, 0);
		glVertex2f(-1, 0.5);
	glColor3ub(200, 200, 0);
		glVertex2f(-1, -0.2);
	glColor3ub(200, 100, 0);
		glVertex2f(0.5, 0.1);
	glEnd();

	glBegin(GL_QUAD_STRIP); // ������� ����
	glColor3ub(200, 100, 0);
		glVertex2f(-1, -0.6);
	glColor3ub(200, 100, 0);
		glVertex2f(-1, -1);
	glColor3ub(200, 100, 0);
		glVertex2f(1, -0.6);
	glColor3ub(200, 200, 0);
		glVertex2f(1, -1);
	glEnd();

	//glBegin(GL_LINES);
	//glEnd();
}
void Oblako(void) { //����� ������ ������, ����� �����
	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
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
	glColor3f(100, 100, 100);
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
	glColor3f(100, 100, 100);
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
	glColor3f(100, 100, 100);
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
	glColor3f(100, 100, 100);
	glVertex2f(0.36, 0.77);
	for (int i = -1; i < cnt4; i++) {
		x4 = sin(a4 * i) * l4;
		y4 = cos(a4 * i) * l4;
		glVertex2f(x4 + 0.36, y4 + 0.77);
	}
	glEnd();
}
void Trees(void) {
	glBegin(GL_QUAD_STRIP); //������� ������
	glColor3ub(101, 67, 33);
	glVertex2f(-0.6, 0.12);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.6, -0.13);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.55, 0.12);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.55, -0.12);
	glEnd();

	glBegin(GL_TRIANGLES); // ������ �����������
	glColor3ub(50, 255, 50);
	glVertex2f(-0.67, -0.06);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.58, 0.06);
	glColor3ub(50, 255, 50);
	glVertex2f(-0.48, -0.06);
	glEnd();

	glBegin(GL_TRIANGLES); // ������� �����������
	glColor3ub(50, 255, 50);
	glVertex2f(-0.67, 0.02);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.577, 0.15);
	glColor3ub(50, 255, 50);
	glVertex2f(-0.48, 0.02);
	glEnd();


	glBegin(GL_QUAD_STRIP); //  ������� ������
	glColor3ub(101, 67, 33);
	glVertex2f(-0.1, 0.34);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.1, 0.26);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.05, 0.34);
	glColor3ub(101, 67, 33);
	glVertex2f(-0.05, 0.24);
	glEnd();

	glBegin(GL_TRIANGLES); // ������ �����������
	glColor3ub(50, 255, 50);
	glVertex2f(-0.15, 0.3);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.075, 0.38);
	glColor3ub(50, 255, 50);
	glVertex2f(0, 0.3);
	glEnd();

	glBegin(GL_TRIANGLES); // ������� �����������
	glColor3ub(50, 255, 50);
	glVertex2f(-0.15, 0.35);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.075, 0.43);
	glColor3ub(50, 255, 50);
	glVertex2f(0, 0.35);
	glEnd();

	glBegin(GL_TRIANGLES); // ������� �����������
	glColor3ub(50, 255, 50);
	glVertex2f(-0.15, 0.4);
	glColor3ub(0, 50, 0);
	glVertex2f(-0.075, 0.49);
	glColor3ub(50, 255, 50);
	glVertex2f(0, 0.4);
	glEnd();
}


void Ambar(void) {
	glBegin(GL_QUAD_STRIP); // ������� �����
	glColor3ub(200, 100, 0);
	glVertex2f(0.5, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(0.5, 0.1);
	glColor3ub(200, 100, 0);
	glVertex2f(1, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(1, 0.2);
	glEnd();

	glBegin(GL_QUAD_STRIP); // �����
	glColor3ub(200, 100, 0);
	glVertex2f(0.6, 0.25);
	glColor3ub(200, 200, 200);
	glVertex2f(0.6, 0.12);
	glColor3ub(200, 100, 0);
	glVertex2f(0.7, 0.25);
	glColor3ub(200, 200, 200);
	glVertex2f(0.7, 0.14);
	glEnd();

	glBegin(GL_TRIANGLES); // ������� ����� �����
	glColor3ub(200, 100, 0);
	glVertex2f(0.5, 0.4);
	glColor3ub(200, 100, 0);
	glVertex2f(1, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(0.75, 0.5);
	glEnd();

	glBegin(GL_TRIANGLES); // ������� ����� �����
	glColor3ub(200, 100, 0);
	glVertex2f(0.75, 0.5);
	glColor3ub(200, 100, 0);
	glVertex2f(1, 0.4);
	glColor3ub(200, 0, 0);
	glVertex2f(1, 0.5);
	glEnd();
}
void Kombain(Figure& f) {
	float x = 0.4;
	float y = -0.45;
	glPushMatrix();
	glTranslatef(f.pos.x, f.pos.y, 0);
	if (f.isRight) {
		glRotatef(180, 0, 1, 0);
	}
	glTranslatef(-0.4, 0, 0);
	glBegin(GL_POLYGON); // ������
	glColor3ub(19, 19, 70);
	glVertex2f(x - 0.15, y + 0.1);
	glColor3ub(19, 19, 70);
	glVertex2f(x - 0.15, y - 0.1);
	glColor3ub(19, 19, 70);
	glVertex2f(x + 0.15, y - 0.1);
	glColor3ub(19, 19, 70);
	glVertex2f(x + 0.15, y + 0.04);
	glColor3ub(19, 19, 70);
	glVertex2f(x + 0.06, y + 0.1);
	glEnd();
	glBegin(GL_QUAD_STRIP); // ������
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.23, y + 0.08);
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.20, y - 0.05);
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.14, y + 0.08);
	glColor3ub(19, 19, 100);
	glVertex2f(x - 0.14, y - 0.05);
	glEnd();
	glBegin(GL_TRIANGLES); // ����
	glColor3ub(100, 100, 100);
	glVertex2f(x - 0.27, y - 0.11);
	glColor3ub(100, 100, 100);
	glVertex2f(x - 0.14, y - 0.03);
	glColor3ub(100, 100, 100);
	glVertex2f(x - 0.14, y - 0.11);
	glEnd();
	float r, t;
	float count = 30; // �������� ������
	float l1 = 0.06;
	float a1 = M_PI * 2 / count;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(x - 0.12, y - 0.1);
	for (int i = -1; i < count; i++) {
		r = sin(a1 * i) * l1;
		t = cos(a1 * i) * l1;
		glVertex2f(r + 0.28, t - 0.54);
	}
	glEnd();
	float c, d;
	float cnt = 30; // ������ ������
	float l = 0.05;
	float a = M_PI * 2 / cnt;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(100, 100, 100);
	glVertex2f(x + 0.16, y - 0.1);
	for (int i = -1; i < cnt; i++) {
		c = sin(a * i) * l;
		d = cos(a * i) * l;
		glVertex2f(c + 0.55, d - 0.55);
	}
	glEnd();
	glBegin(GL_QUADS); // ������� ����� �����
	glColor3ub(19, 19, 19);
	glVertex2f(x - 0.12, y + 0.08);
	glColor3ub(19, 19, 19);
	glVertex2f(x - 0.12, y + 0.068);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.15, y + 0.068);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.15, y + 0.08);
	glEnd();
	glBegin(GL_QUADS); // �������� ����� �����
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.14, y + 0.08);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.17, y + 0.047);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.19, y + 0.047);
	glColor3ub(19, 19, 19);
	glVertex2f(x + 0.16, y + 0.08);
	glEnd();
	glPopMatrix();
}
Figure kombainF = { {0,0}, false, 100 };