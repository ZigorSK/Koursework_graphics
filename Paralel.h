#pragma once
#include"Cmat.h"
#include<windows.h>
#include<cmath>
#include<iostream>
#include<stack>
#include<conio.h>

using namespace std;

class Paralel
{
	float A[8][4];//������� � ������� ���������������

	float Matr_of_flat_equation[4][6];//������� ��������� ���������

	float mull_equ_and_light[6];// ������� ������������ ��������� ��������� �� ������ ��������� �����
	float mull_equ_and_observer[6];//������� ������������ ��������� ��������� �� ������ �����������

	int observer[4];//����� ����������, ������� � ������������
	int light[4];//����� ��������� �����(� �������������,���� =))), ������� � ������������

	float center[3];

	int y_floor;
public:

	Paralel(int flag);

	Paralel(const Paralel & F);
	Paralel & operator=(Paralel & f);
	Paralel & operator*(Cmat & Bb);
	~Paralel();

	//void drow_line(float x1, float y1, float x2, float y2, int color_1 = 0, int color_2 = 0, int color_3 = 0);//flag = 1 �����������, 0 - �������
	void drow_figure(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3, int flag, int flag2);//+
	void del_invisible_line();//-
	void equation_of_flat(int num_of_flat, int T1, int T2, int T3, int T4);//num_of_flat - ����� ���������, ���� ����� ��������� ���������, t1 t2 t3 ������� ����� � ������� � +
	void drow();//+
	int fill(int x_pixel, int y_pixel, int  flag, bool **array_of_paint_pixel); // flag = 0 � ����, flag = 1 � ����� +
	void drow_shadow();//-

	void move(int flag);//�������� ��� ���� ������� �� ����� �� ������� ������, ���� �����, �� ��������� �������� �������������� 
	void scale(int flag);
	void roat(int flag, int flag2);

	bool going_abroad();
};