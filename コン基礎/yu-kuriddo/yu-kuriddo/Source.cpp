#include<stdio.h>

int main(void)
{
	int x, y, z;/*�ϐ���x,y,z�Ƃ���*/
	
	printf("1�ڂ̐�������͂��Ă��������B\n");
	scanf_s("%d", &x);
	printf("2�ڂ̐�������͂��Ă��������B\n");
	scanf_s("%d", &y);

	z = x%y;
	while (z != 0) {/*x��y�Ŋ������]�肪0�ȊO�̂Ƃ�*/
		x = y;/*y��x�ɂ���*/
		y = z;/*z��y�ɂ���*/

		z = x%y;
	}
	printf("�ő���񐔂�%d�ł��B\n",y);

	return 0;
}
