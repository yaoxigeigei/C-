//#define _CRT_SECURE_NO_WARNINGS	
//#include<stdio.h>
//#include<string.h>
//void left_move(char* arr, int k)
//{
//	int size = (int)strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char temp = arr[0];
//		int j = 0;
//		for (j = 0; j < size-1; j++) 
//		{
//			arr[j] = arr[j+1];
//		}
//		arr[j] = temp;
//	}
//}
//void right_move(char* arr, int k)
//{
//	int size = (int)strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char temp = arr[size - 1];
//		int j = size - 1;
//		for (j = size - 1; j > 0; j--)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[0] = temp;
//	}
//}
//int main()
//{
//	char arr[20]="abcdefg";
//	int k = 0;
//	int y = 0;
//	printf("该字符串为:%s\n", arr);
//	printf("请输入你要旋转几个字符:");
//	scanf_s("%d", &k);
//	printf("请输入你要左旋还是右旋(左0)(右1):");
//	scanf_s("%d", &y);
//	if (y == 0)
//	{
//		left_move(arr,k);
//	}
//	else
//	{
//		right_move(arr, k);
//	}
//	printf("%s", arr);
//	return 0;
//}








//三步旋转法
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* left, char* right)
{
	assert(*left != NULL);
	assert(*right != NULL);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int size = (int)strlen(arr);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+size-1);
	reverse(arr,arr+size-1);
}
void right_move(char* arr, int k)
{
	assert(arr);
	int size = (int)strlen(arr);
	reverse(arr+size-k,arr+size-1);
	reverse(arr,arr+size-k-1);
	reverse(arr, arr + size - 1);
}
int main()
{
	char arr[20]="abcdefg"; //char *arr="adadadaaqd";
	int k = 0;
	int y = 0;
	int size = (int)strlen(arr);
	printf("该字符串为:%s\n", arr);
	printf("请输入你要旋转几个字符:");
	scanf_s("%d", &k);
	assert(k < size);
	printf("请输入你要左旋还是右旋(左0)(右1):");
	scanf_s("%d", &y);
	if (y == 0)
	{
		left_move(arr,k);
	}
	else
	{
		right_move(arr, k);
	}
	printf("%s", arr);
	return 0;
}