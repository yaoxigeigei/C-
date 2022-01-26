#include<stdio.h>
void test1(int arr[3][5])
{

}
void test2(int arr[][5])
{

}

void test3(int(*arr)[5])//arr是一个指针,[5]表示数组有5个元素,int表示每个元素表示整形
{

}
int main()
{
	int arr[3][5] = { 0 };
	test1(arr);
	test2(arr);							//数组传参


	test3(arr);							//指针传参
	return 0;
}


