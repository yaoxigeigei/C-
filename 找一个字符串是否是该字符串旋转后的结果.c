#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "bcdefa";
	int size1 = strlen(arr1);
	int size2 = strlen(arr2);
	if (size1 != size2)
	{
		printf("����");
		return 0;
	}
	strncat(arr1, arr1, 6);
	if (strstr(arr1, arr2) == NULL)
	{
		printf("���ǵ�");
	}
	else
	{
		printf("�ǵ�");
	}
	return 0;
}