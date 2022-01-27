#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//指向数组地址的指针
	return 0;
}



#include<stdio.h>
int  Add(int a, int b)
{
	return a + b;
}
int main()
{
	int (*p)(int, int) = Add;      //指向函数的指针
	int (*p)(int, int) = &Add;     //指向函数的指针


	int(*p[4])(int, int);          //指向函数指针的数组 -函数指针数组
	int(*(*pp)[4])(int, int) = &p; //指向函数指针数组的指针
	//pp是指针,指针指向的数组有4个元素,指针的类型是int(*)(int ,int)
	return 0;
}


