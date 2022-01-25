#include<stdio.h>
void test1(int arr1[])//没问题
{

}
void test1(int arr1[10])//没问题
{

}
void test1(int* arr)//没问题
{

}

void test2(int* arr2[])
{

}
void test2(int* arr2[20])
{

}
void test2(int** arr2)
{

}
int main()
{
	int arr1[10] = { 0 };
	int* arr2[20] = { 0 };
	test1(arr1);
	test2(arr2);
	return 0;
}