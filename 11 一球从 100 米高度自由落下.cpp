#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double h = 100;
	double temp = h;
	double s = 0;
	for (i = 0; i < 3; i++)
	{
		s = s + 2*h;
		h = h / 2;
	}
	s = s - temp;
	printf("��10�����ʱ�������ľ��룺%f\n��10�η����ĸ߶�:%f \n", s, h);
	system("pause");
	return 0;
}