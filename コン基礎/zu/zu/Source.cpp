#include<stdio.h>

int main(void)
{
	int a,x,y,z;/*�ϐ���a,x,y,z�Ƃ���*/

	printf("���K�܂ŕ\�����܂����H\n");
	scanf_s("%d", &a);

	for (x = 1; x <= a; x++) {/*x��1����a�܂�+1���Ȃ���J��Ԃ�*/
		for (z = 0; z<=a-x ;z++) {/*z��0����a-x�܂�+1���Ȃ���J��Ԃ�*/
			printf("�@");
		}
		for (y = 1; y<=2*x-1; y++) {/*y��1����2*x-1�܂�+1���Ȃ���J��Ԃ�*/
			printf("��");
		}
		printf("\n");
	}
	return 0;
}