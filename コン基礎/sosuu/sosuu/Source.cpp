#include<stdio.h>

int main(void)
{
	int x, y;/*�ϐ���x,y�Ƃ���*/

	printf("2�ȏ�̐�������͂��Ă��������B\n");
	scanf_s("%d", &x);

	for (y = 2; y <= x; y++) {/*y��2���炘�܂�+1����Ȃ���J��Ԃ�*/	
		if (y==x) {/*y=x�̂Ƃ�*/
			printf("%d�͑f���ł��B\n", x);
		}
		else if(x%y==0){/*y=x�ȊO��x��y�Ŋ������]�肪0�̂Ƃ�*/
			printf("%d�͑f���ł͂���܂���B\n", x);
			break;/*�J��Ԃ��𔲂���*/
		}
	}
	return 0;
}