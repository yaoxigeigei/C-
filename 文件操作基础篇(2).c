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
int main()       //输入文件
{
	struct S s = { 100,3.14f,"zhj" };
	FILE* pf = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt", "w");
	if (pf == NULL)
	{
		printf("错误信息:%s",strerror(errno));
	}
	//格式化形式写文件
	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
	
	fclose(pf);
	pf = NULL;

	return 0;
}


int main()            //输出文件
{
	struct S s = { 0 };
	FILE* pf = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt", "r");
	if (pf == NULL)
	{
		printf("错误信息:%s", strerror(errno));
	}
	//格式化读文件
	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &(s.arr));  //将信息读到s里
	printf("%d %f %s", s.n, s.score, s.arr);

	fclose(pf);
	pf = NULL;

	return 0;
}


int main()            //标准输入输出
{
	struct S s = { 0 };
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);

	return 0;
}