#include<stdio.h>
#include<math.h>

int main(void)
{
	int x;
	double s,c,t,p,r;/*�ϐ���x,s,c,t,p,r�Ƃ���*/
	p = 3.14159265358979;/*p=�~����*/

	printf("�x���@sinx�@cosx�@tanx\n");
	for (x = 0; x <= 90; x++) {/*x��0����90�܂�+1����Ȃ���J��Ԃ�*/
		r = p*(x / 180.0);/*�x�������W�A��*/
		s = sin(r);
		c = cos(r);
		t = tan(r);

		if (x < 90) {
			printf("%d���@%.4f�@%.4f�@%.4f\n", x, s, c, t);
		}
		else {/*x��90�̂Ƃ�*/
			printf("%d���@%.4f�@%.4f�@�Ȃ�\n", x, s, c);
		}
	}
	return 0;
}