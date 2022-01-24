#include<stdio.h>                          //指针数组
int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };
	int* arr4[] = { arr1,arr2,arr3 };
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d", *(arr4[i] + j));
		}
		printf("\n");
	}
	return 0;
}
