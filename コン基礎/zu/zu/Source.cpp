#include<stdio.h>

int main(void)
{
	int a,x,y,z;/*変数をa,x,y,zとする*/

	printf("何階まで表示しますか？\n");
	scanf_s("%d", &a);

	for (x = 1; x <= a; x++) {/*xを1からaまで+1しながら繰り返し*/
		for (z = 0; z<=a-x ;z++) {/*zを0からa-xまで+1さながら繰り返し*/
			printf("　");
		}
		for (y = 1; y<=2*x-1; y++) {/*yを1から2*x-1まで+1しながら繰り返し*/
			printf("＊");
		}
		printf("\n");
	}
	return 0;
}