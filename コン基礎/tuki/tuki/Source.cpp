#include<stdio.h>

int main(void)
{
	char jan[8] = "January";  char jans[11] = "�K�[�l�b�g";
	char feb[9] = "February";  char febs[11] = "�A���V�X�g";
	char mar[6] = "March";  char mars[13] = "�A�N�A�}����";
	char apr[6] = "April";  char aprs[13] = "�_�C�������h";
	char may[4] = "May";  char mays[11] = "�G�������h";
	char jun[5] = "June";  char juns[7] = "�p�[��";
	char jul[5] = "July";  char juls[7] = "���r�[";
	char aug[7] = "August";  char augs[13] = "�T�[�h�j�N�X";
	char sep[10] = "September";  char seps[11] = "�T�t�@�C�A";
	char oct[8] = "October";  char octs[9] = "�I�p�[��";
	char nov[9] = "November";  char novs[9] = "�g�p�[�Y";
	char dec[9] = "December";  char decs[13] = "���s�X���Y��";

	int x, y, z;
	
	printf("�����ł����H\n");
	scanf_s("%d", &x);

	switch (x) {
	case 1:
		printf("1���͉p���%s�ł��B\n", jan);
		printf("�a���΂�%s�ł��B\n", jans);
		break;
	case 2:
		printf("2���͉p���%s�ł��B\n", feb);
		printf("�a���΂�%s�ł��B\n", febs);
		break;
	case 3:
		printf("3���͉p���%s�ł��B\n", mar);
		printf("�a���΂�%s�ł��B\n", mars);
		break;
	case 4:
		printf("4���͉p���%s�ł��B\n", apr);
		printf("�a���΂�%s�ł��B\n", aprs);
		break;
	case 5:
		printf("5���͉p���%s�ł��B\n", may);
		printf("�a���΂�%s�ł��B\n", mays);
		break;
	case 6:
		printf("6���͉p���%s�ł��B\n", jun);
		printf("�a���΂�%s�ł��B\n", juns);
		break;
	case 7:
		printf("7���͉p���%s�ł��B\n", jul);
		printf("�a���΂�%s�ł��B\n", juls);
		break;
	case 8:
		printf("8���͉p���%s�ł��B\n", aug);
		printf("�a���΂�%s�ł��B\n", augs);
		break;
	case 9:
		printf("9���͉p���%s�ł��B\n", sep);
		printf("�a���΂�%s�ł��B\n", seps);
		break;
	case 10:
		printf("10���͉p���%s�ł��B\n", oct);
		printf("�a���΂�%s�ł��B\n", octs);
		break;
	case 11:
		printf("11���͉p���%s�ł��B\n", nov);
		printf("�a���΂�%s�ł��B\n",novs);
		break;
	case 12:
		printf("12���͉p���%s�ł��B\n", dec);
		printf("�a���΂�%s�ł��B\n", decs);
		break;
	}
	return 0;
}