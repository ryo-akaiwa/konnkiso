#include<stdio.h>

int main(void)
{
	int a, b, c, d, e, f, g;/*�ϐ���a,b,c,d,e,f,g�Ƃ���*/
	g = 0;

	printf("���ւ��������z����͂��Ă��������B\n");
	scanf_s("%d", &a);

	printf("1�~�@5�~�@10�~�@50�~\n");
	for (b = a; b >= 0; b--) {/*b��a����0�܂Ł|1����Ȃ���J��Ԃ�*/
		for (c = a; c >= 0; c -= 5) {
			for (d = a; d >= 0; d -= 10) {
				for (e = a; e >= 0; e -= 50) {
					if (a == b + c+ d + e) {/*a=b+c+d+e�ƂȂ�Ƃ�*/
						printf("%3d�@%3d�@%3d�@%3d\n", b, c/5, d/10, e/50);
						g++;/*���삪1��������Ag��+1����*/
					}
				}
			}
		}
	}
	printf("�g�ݍ��킹��%d�ʂ�ł��B\n", g);
	return 0;
}
