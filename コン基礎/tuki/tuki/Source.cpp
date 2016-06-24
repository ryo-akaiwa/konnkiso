#include<stdio.h>

int main(void)
{
	char jan[8] = "January";  char jans[11] = "ガーネット";
	char feb[9] = "February";  char febs[11] = "アメシスト";
	char mar[6] = "March";  char mars[13] = "アクアマリン";
	char apr[6] = "April";  char aprs[13] = "ダイヤモンド";
	char may[4] = "May";  char mays[11] = "エメラルド";
	char jun[5] = "June";  char juns[7] = "パール";
	char jul[5] = "July";  char juls[7] = "ルビー";
	char aug[7] = "August";  char augs[13] = "サードニクス";
	char sep[10] = "September";  char seps[11] = "サファイア";
	char oct[8] = "October";  char octs[9] = "オパール";
	char nov[9] = "November";  char novs[9] = "トパーズ";
	char dec[9] = "December";  char decs[13] = "ラピスラズリ";

	int x, y, z;
	
	printf("何月ですか？\n");
	scanf_s("%d", &x);

	switch (x) {
	case 1:
		printf("1月は英語で%sです。\n", jan);
		printf("誕生石は%sです。\n", jans);
		break;
	case 2:
		printf("2月は英語で%sです。\n", feb);
		printf("誕生石は%sです。\n", febs);
		break;
	case 3:
		printf("3月は英語で%sです。\n", mar);
		printf("誕生石は%sです。\n", mars);
		break;
	case 4:
		printf("4月は英語で%sです。\n", apr);
		printf("誕生石は%sです。\n", aprs);
		break;
	case 5:
		printf("5月は英語で%sです。\n", may);
		printf("誕生石は%sです。\n", mays);
		break;
	case 6:
		printf("6月は英語で%sです。\n", jun);
		printf("誕生石は%sです。\n", juns);
		break;
	case 7:
		printf("7月は英語で%sです。\n", jul);
		printf("誕生石は%sです。\n", juls);
		break;
	case 8:
		printf("8月は英語で%sです。\n", aug);
		printf("誕生石は%sです。\n", augs);
		break;
	case 9:
		printf("9月は英語で%sです。\n", sep);
		printf("誕生石は%sです。\n", seps);
		break;
	case 10:
		printf("10月は英語で%sです。\n", oct);
		printf("誕生石は%sです。\n", octs);
		break;
	case 11:
		printf("11月は英語で%sです。\n", nov);
		printf("誕生石は%sです。\n",novs);
		break;
	case 12:
		printf("12月は英語で%sです。\n", dec);
		printf("誕生石は%sです。\n", decs);
		break;
	}
	return 0;
}