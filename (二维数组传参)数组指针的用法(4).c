#include<stdio.h>
void test1(int arr[3][5])
{

}
void test2(int arr[][5])
{

}

void test3(int(*arr)[5])//arr��һ��ָ��,[5]��ʾ������5��Ԫ��,int��ʾÿ��Ԫ�ر�ʾ����
{

}
int main()
{
	int arr[3][5] = { 0 };
	test1(arr);
	test2(arr);							//���鴫��


	test3(arr);							//ָ�봫��
	return 0;
}


