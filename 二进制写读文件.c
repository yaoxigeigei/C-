#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include<string.h>
#include<errno.h>
struct S
{
	char name[20];
	int age;
	double score;
};
//int main()  //�Զ�����д�ļ�
//{
//	struct S s = { "����",20,55.6 };
//	FILE* pf = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	struct S tmp = { 0 };
	FILE* pf = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt", "rb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
	}
	//�Զ����Ƶ���ʽ���ļ�
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);

	fclose(pf);
	pf = NULL;
	return 0;
}