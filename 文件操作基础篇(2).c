#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include<string.h>
#include<errno.h>
struct S
{
	int n;
	float score;
	char arr[10];
};
int main()       //�����ļ�
{
	struct S s = { 100,3.14f,"zhj" };
	FILE* pf = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt", "w");
	if (pf == NULL)
	{
		printf("������Ϣ:%s",strerror(errno));
	}
	//��ʽ����ʽд�ļ�
	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
	
	fclose(pf);
	pf = NULL;

	return 0;
}


int main()            //����ļ�
{
	struct S s = { 0 };
	FILE* pf = fopen("D:\\VS2022�����������\\VS��Ŀ\\text.txt", "r");
	if (pf == NULL)
	{
		printf("������Ϣ:%s", strerror(errno));
	}
	//��ʽ�����ļ�
	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));  //����Ϣ����s��
	printf("%d %f %s", s.n, s.score, s.arr);

	fclose(pf);
	pf = NULL;

	return 0;
}


int main()            //��׼�������
{
	struct S s = { 0 };
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);

	return 0;
}