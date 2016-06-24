#include<stdio.h>

int main(void)
{
	int a, b, c, d, e, f, g;/*変数をa,b,c,d,e,f,gとする*/
	g = 0;

	printf("両替したい金額を入力してください。\n");
	scanf_s("%d", &a);

	printf("1円　5円　10円　50円\n");
	for (b = a; b >= 0; b--) {/*bはaから0まで－1されながら繰り返し*/
		for (c = a; c >= 0; c -= 5) {
			for (d = a; d >= 0; d -= 10) {
				for (e = a; e >= 0; e -= 50) {
					if (a == b + c+ d + e) {/*a=b+c+d+eとなるとき*/
						printf("%3d　%3d　%3d　%3d\n", b, c/5, d/10, e/50);
						g++;/*操作が1周したら、gを+1する*/
					}
				}
			}
		}
	}
	printf("組み合わせは%d通りです。\n", g);
	return 0;
}
