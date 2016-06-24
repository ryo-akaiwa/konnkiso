#include<stdio.h>
#include<math.h>

int main(void)
{
	int x;
	double s,c,t,p,r;/*変数をx,s,c,t,p,rとする*/
	p = 3.14159265358979;/*p=円周率*/

	printf("度数　sinx　cosx　tanx\n");
	for (x = 0; x <= 90; x++) {/*xは0から90まで+1されながら繰り返し*/
		r = p*(x / 180.0);/*度数→ラジアン*/
		s = sin(r);
		c = cos(r);
		t = tan(r);

		if (x < 90) {
			printf("%d°　%.4f　%.4f　%.4f\n", x, s, c, t);
		}
		else {/*x＝90のとき*/
			printf("%d°　%.4f　%.4f　なし\n", x, s, c);
		}
	}
	return 0;
}