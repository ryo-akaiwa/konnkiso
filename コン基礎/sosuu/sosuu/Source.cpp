#include<stdio.h>

int main(void)
{
	int x, y;/*変数をx,yとする*/

	printf("2以上の整数を入力してください。\n");
	scanf_s("%d", &x);

	for (y = 2; y <= x; y++) {/*yは2からｘまで+1されながら繰り返し*/	
		if (y==x) {/*y=xのとき*/
			printf("%dは素数です。\n", x);
		}
		else if(x%y==0){/*y=x以外でxをyで割った余りが0のとき*/
			printf("%dは素数ではありません。\n", x);
			break;/*繰り返しを抜ける*/
		}
	}
	return 0;
}