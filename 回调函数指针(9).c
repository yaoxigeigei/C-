#include<stdio.h>
void print(char* arr)            //�ú�������Ϊ�ص�����	 
{
	printf("����%s", arr);
}

void test(void (*p)(char*))
{
	printf("�ĸ�\n");
	p("�˸���¹");
}
int main()
{
	test(print);
	return 0;
}

