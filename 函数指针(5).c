#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
int main()          //拿到函数的地址
{
	int a = 10;
	int b = 20;
	Add(a, b);
	printf("%p\n", Add);
	printf("%p\n", &Add);


	//函数的指针操作
	int (*p)(int, int) = Add;
	int (*p)(int, int) = &Add;
	int(*p)(int x, int y) = Add;
	int(*p)(int x, int y) = &Add;
	return 0;
}