#include<stdio.h>
#include<math.h>

int main(void)
{
	int  b, c, d, e;
	double a, v;
	
	a = 3.141592653589793238;

	v = 0;

	printf("‰~‚Ì’ê–Ê‚Ì”¼Œa");
	scanf_s("%d", &b);
	printf("‰~‚Ì‚‚³");
	scanf_s("%d", &c);
	printf("‚‚³‚ğ‰½•ªŠ„‚µ‚Ü‚·‚©H\n");
	scanf_s("%d", &d);

	for (e = 1; e <= d - 1; e++) {
		v += (pow(((d-e)/d)*b, 2))*a*c / d;
	}
	printf("‚±‚Ì‰~‚Ì‘ÌÏ‚Í%f‚Å‚·B\n", v);

	return 0;
}