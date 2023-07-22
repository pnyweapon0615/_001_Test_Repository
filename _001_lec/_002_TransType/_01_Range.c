#include "stdio.h"

void main() {
	char c = 128;
	printf("%d\n", c);

	char ch = 10;
	int i = 1000;
	float f = 1.5f;
	double d = ch * i * f + 10000;

	printf("결과 : %lf\n",d);

	/*float Mit_Beon;
	float No_pee;

	printf("밑변 입력 >>");
	scanf_s("%f", &Mit_Beon);

	printf("높이 입력 >>");
	scanf_s("%f", &No_pee);

	printf("삼각형의 넓이는 %f입니다.", 0.5f * Mit_Beon * No_pee);*/
}