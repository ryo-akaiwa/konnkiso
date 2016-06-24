#include<stdio.h>

int main(void)
{
	int x, y, z;/*変数をx,y,zとする*/
	
	printf("1つ目の整数を入力してください。\n");
	scanf_s("%d", &x);
	printf("2つ目の整数を入力してください。\n");
	scanf_s("%d", &y);

	z = x%y;
	while (z != 0) {/*xをyで割った余りが0以外のとき*/
		x = y;/*yをxにする*/
		y = z;/*zをyにする*/

		z = x%y;
	}
	printf("最大公約数は%dです。\n",y);

	return 0;
}
