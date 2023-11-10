#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char num[5];
	char odd[5];
	char even[5];
	int i = 0;

	printf("Please input five numbers: ");
	scanf("%c", &num); //입력을...어떻ㄱㅔ 받지..?

	for (i = 0; i <= 4; i++)
	{
		if (num[i] % 2 == 0)
			//배열 even에 num[i] 추가
		else
			//배열 odd에 num[i] 추가
	}


	printf("Odd number: %c", odd);
	printf("Even number: %c", even);

	return 0;
}