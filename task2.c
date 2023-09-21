#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("10 & 15 = %d \n", num1 & num2);
	printf("10 | 15 = %d \n", num1 | num2);
	printf("10 ^ 15 = %d \n", num1 ^ num2);
	return 0;
}