#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char num[5];
	char odd[5];
	char even[5];
	int i = 0;

	printf("Please input five numbers: ");
	scanf("%c", &num); //�Է���...����� ����..?

	for (i = 0; i <= 4; i++)
	{
		if (num[i] % 2 == 0)
			//�迭 even�� num[i] �߰�
		else
			//�迭 odd�� num[i] �߰�
	}


	printf("Odd number: %c", odd);
	printf("Even number: %c", even);

	return 0;
}