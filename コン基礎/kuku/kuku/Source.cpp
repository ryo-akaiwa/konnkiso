#include<stdio.h>
#define TATE 9
#define YOKO 9

int main(void)
{
	int test[TATE][YOKO];
	int a, b;

	printf("*�b  �P  �Q  �R  �S  �T  �U  �V  �W  �X\n");
	printf("�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[\n");
	for (a = 0; a < TATE; a++) {
		printf("%d�b", a + 1);
		for (b = 0; b < YOKO; b++) {
			test[a][b] = (a+1)*(b+1);
			printf("�@%2d", test[a][b]);
		}
		printf("\n");
	}
	return 0;
}