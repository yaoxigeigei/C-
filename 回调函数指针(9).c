#include<stdio.h>
void print(char* arr)            //该函数被称为回调函数	 
{
	printf("你是%s", arr);
}

void test(void (*p)(char*))
{
	printf("哪个\n");
	p("八嘎雅鹿");
}
int main()
{
	test(print);
	return 0;
}

