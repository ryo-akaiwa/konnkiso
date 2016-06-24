#include<stdio.h>
#define TATE 9
#define YOKO 9

int main(void)
{
	int test[TATE][YOKO];
	int a, b;

	printf("*Åb  ÇP  ÇQ  ÇR  ÇS  ÇT  ÇU  ÇV  ÇW  ÇX\n");
	printf("Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[Å[\n");
	for (a = 0; a < TATE; a++) {
		printf("%dÅb", a + 1);
		for (b = 0; b < YOKO; b++) {
			test[a][b] = (a+1)*(b+1);
			printf("Å@%2d", test[a][b]);
		}
		printf("\n");
	}
	return 0;
}