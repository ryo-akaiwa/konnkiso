#include<stdio.h>
#include<math.h>

int main(void)
{
	int  b, c, d, e;
	double a, v;
	
	a = 3.141592653589793238;

	v = 0;

	printf("�~���̒�ʂ̔��a��");
	scanf_s("%d", &b);
	printf("�~���̍�����");
	scanf_s("%d", &c);
	printf("���������������܂����H\n");
	scanf_s("%d", &d);

	for (e = 1; e <= d - 1; e++) {
		v += (pow(((d-e)/d)*b, 2))*a*c / d;
	}
	printf("���̉~���̑̐ς�%f�ł��B\n", v);

	return 0;
}