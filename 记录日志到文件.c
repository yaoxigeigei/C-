#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt", "w");
	for (i = 0; i < 10; i++);
	{
		arr[i] = i;
		fprintf(pf, "ʱ��:%s ����:%s ��ַ:%s", __TIME__, __DATE__, __FILE__);
	}

	fclose(pf);
	pf = NULL;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}