#include<stdio.h>
int Add(int x,int y)
{
	return x + y;
}
int main()
{
	//ָ������
	int* arr[5];
	//����ָ��
	int(*p)[] = &arr;          //��û��&��һ��
	//����ָ��
	int (*p)(int,int) = &Add;  //��û��&��һ��
	//ʹ�ú���ָ��
	p(2, 5);
	(*p)(2, 5);
	//����ָ�������
	int (*p[])(int, int);
	//ָ����ָ�������ָ��
	int (*(*pp)[])(int, int)=&p;
	return  0;
}



