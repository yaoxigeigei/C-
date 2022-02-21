#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* pf = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt", "r");
	if (pf == NULL)
	{
		printf("%s ", strerror(errno));
		return;
	}
	//定位文件指针
	fseek(pf, 2, SEEK_CUR);
	//读取文件
	printf("%c",fgetc(pf));

	fclose(pf);
	pf == NULL;
	return 0;
}