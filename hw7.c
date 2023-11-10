#define _CRT_SECURE_NO_WARNINGS
#define N 6
#include <stdio.h>

int main(void)
{
	//선언
	int arr1[N] = { 1,2,3,4,5,6 };
	int arr2[N] = { 7,8,9,10,11,12 };
	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];
	int i = 0, temp = 0;

	//원래 값 출력
	printf("arr1: ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");



	printf("arr2: ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n\n");
	printf("after swap\n");


	//값 바꾸기
	for (i = 0; i < N; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

		ptr1++;
		ptr2++;
	}


	//바꾼 값 출력
	printf("arr1: ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");



	printf("arr2: ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr2[i]);
	}

	
	return 0;
}