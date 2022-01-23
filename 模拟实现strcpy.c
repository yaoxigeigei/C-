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
//void my_strcpy(char* arr1, char* arr2)//优化方案一
//{
//	while (*arr2)
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}
// 
// 
//void my_strcpy(char* arr1, char* arr2)//优化方案二
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
// 
// 
//void my_strcpy(char* arr1, char* arr2)//优化方案三
//{
//	if (arr1 != NULL && arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}
//void my_strcpy(char* arr1, char* arr2)//优化方案四
//{
//	assert(arr1 != NULL);//断言 成立则往下运行 不成立则返回错误的地方
//	assert(arr2 != NULL);//断言 成立则往下运行 不成立则返回错误的地方
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}

char* my_strcpy(char* arr1,const char* arr2)//优化方案五
{
	char* a = arr1;
	assert(arr1 != NULL);//断言 成立则往下运行 不成立则返回错误的地方
	assert(arr2 != NULL);//断言 成立则往下运行 不成立则返回错误的地方
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