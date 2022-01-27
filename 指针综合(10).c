#include<stdio.h>
int Add(int x,int y)
{
	return x + y;
}
int main()
{
	//指针数组
	int* arr[5];
	//数组指针
	int(*p)[] = &arr;          //有没有&都一样
	//函数指针
	int (*p)(int,int) = &Add;  //有没有&都一样
	//使用函数指针
	p(2, 5);
	(*p)(2, 5);
	//函数指针的数组
	int (*p[])(int, int);
	//指向函数指针数组的指针
	int (*(*pp)[])(int, int)=&p;
	return  0;
}



