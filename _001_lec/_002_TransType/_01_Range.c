#include "stdio.h"

void main() {
	char c = 128;
	printf("%d\n", c);

	char ch = 10;
	int i = 1000;
	float f = 1.5f;
	double d = ch * i * f + 10000;

	printf("��� : %lf\n",d);

	/*float Mit_Beon;
	float No_pee;

	printf("�غ� �Է� >>");
	scanf_s("%f", &Mit_Beon);

	printf("���� �Է� >>");
	scanf_s("%f", &No_pee);

	printf("�ﰢ���� ���̴� %f�Դϴ�.", 0.5f * Mit_Beon * No_pee);*/
}