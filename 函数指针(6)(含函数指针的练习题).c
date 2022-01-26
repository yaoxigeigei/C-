#include<stdio.h>
void test1()
{}
void test2()
{}
void test3()
{}
int main()                                   //指针函数
{
	int (*p[3])() = { test1,test2,test3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%p\n", p[i]);
	}
	return 0;
}


//练习题
char* my_strcpy(char* arr,const char* src)
//1:写一个函数指针,能够指向my_strcpy
char* (*p)(char*, const char*)=my_strcpy;
//2:写一个指针函数,能够存放4个my_strcpy
char* (*p[4])(char*, const char*) = { my_strcpy,my_strcpy ,my_strcpy ,my_strcpy };
