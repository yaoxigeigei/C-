#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* pf = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt", "r");
	if (pf == NULL)
	{
		printf("%s ", strerror(errno));
		return;
	}
	//��λ�ļ�ָ��
	fseek(pf, 2, SEEK_CUR);
	//��ȡ�ļ�
	printf("%c",fgetc(pf));

	fclose(pf);
	pf == NULL;
	return 0;
}