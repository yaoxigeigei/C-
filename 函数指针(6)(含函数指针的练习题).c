#include<stdio.h>
void test1()
{}
void test2()
{}
void test3()
{}
int main()                                   //ָ�뺯��
{
	int (*p[3])() = { test1,test2,test3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%p\n", p[i]);
	}
	return 0;
}


//��ϰ��
char* my_strcpy(char* arr,const char* src)
//1:дһ������ָ��,�ܹ�ָ��my_strcpy
char* (*p)(char*, const char*)=my_strcpy;
//2:дһ��ָ�뺯��,�ܹ����4��my_strcpy
char* (*p[4])(char*, const char*) = { my_strcpy,my_strcpy ,my_strcpy ,my_strcpy };
