#include<stdio.h>
#include<math.h>

int main(void)
{
	int  b, c, d, e;
	double a, v;
	
	a = 3.141592653589793238;

	v = 0;

	printf("円錐の底面の半径＝");
	scanf_s("%d", &b);
	printf("円錐の高さ＝");
	scanf_s("%d", &c);
	printf("高さを何分割しますか？\n");
	scanf_s("%d", &d);

	for (e = 1; e <= d - 1; e++) {
		v += (pow(((d-e)/d)*b, 2))*a*c / d;
	}
	printf("この円錐の体積は%fです。\n", v);

	return 0;
}