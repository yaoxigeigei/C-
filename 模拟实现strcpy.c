#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<cassert>
//void my_strcpy(char* arr1, char* arr2)
//{
//	while(*arr2)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
// 
// 
//void my_strcpy(char* arr1, char* arr2)//�Ż�����һ
//{
//	while (*arr2)
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}
// 
// 
//void my_strcpy(char* arr1, char* arr2)//�Ż�������
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
// 
// 
//void my_strcpy(char* arr1, char* arr2)//�Ż�������
//{
//	if (arr1 != NULL && arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}
//void my_strcpy(char* arr1, char* arr2)//�Ż�������
//{
//	assert(arr1 != NULL);//���� �������������� �������򷵻ش���ĵط�
//	assert(arr2 != NULL);//���� �������������� �������򷵻ش���ĵط�
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}

char* my_strcpy(char* arr1,const char* arr2)//�Ż�������
{
	char* a = arr1;
	assert(arr1 != NULL);//���� �������������� �������򷵻ش���ĵط�
	assert(arr2 != NULL);//���� �������������� �������򷵻ش���ĵط�
	while (*arr1++ = *arr2++)
	{
		;
	}
	return a;
}
int main()
{
	char arr1[] = "****************";
	char arr2[] = "abcd";
	//strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1, arr2) );
	return 0;
}