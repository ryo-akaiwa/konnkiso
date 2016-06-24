#include<stdio.h>

int main(void)
{
	int a,x,y,z;/*•Ï”‚ğa,x,y,z‚Æ‚·‚é*/

	printf("‰½ŠK‚Ü‚Å•\¦‚µ‚Ü‚·‚©H\n");
	scanf_s("%d", &a);

	for (x = 1; x <= a; x++) {/*x‚ğ1‚©‚ça‚Ü‚Å+1‚µ‚È‚ª‚çŒJ‚è•Ô‚µ*/
		for (z = 0; z<=a-x ;z++) {/*z‚ğ0‚©‚ça-x‚Ü‚Å+1‚³‚È‚ª‚çŒJ‚è•Ô‚µ*/
			printf("@");
		}
		for (y = 1; y<=2*x-1; y++) {/*y‚ğ1‚©‚ç2*x-1‚Ü‚Å+1‚µ‚È‚ª‚çŒJ‚è•Ô‚µ*/
			printf("–");
		}
		printf("\n");
	}
	return 0;
}