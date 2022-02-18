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
//int main()  //以二进制写文件
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	//二进制的形式写文件
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
	FILE* pf = fopen("D:\\VS2022相关所有内容\\VS项目\\text.txt", "rb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
	}
	//以二进制的形式读文件
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);

	fclose(pf);
	pf = NULL;
	return 0;
}