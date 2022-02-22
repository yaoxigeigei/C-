#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt", "w");
	for (i = 0; i < 10; i++);
	{
		arr[i] = i;
		fprintf(pf, "时间:%s 日期:%s 地址:%s", __TIME__, __DATE__, __FILE__);
	}

	fclose(pf);
	pf = NULL;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}