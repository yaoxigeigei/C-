#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//ָ�������ַ��ָ��
	return 0;
}



#include<stdio.h>
int  Add(int a, int b)
{
	return a + b;
}
int main()
{
	int (*p)(int, int) = Add;      //ָ������ָ��
	int (*p)(int, int) = &Add;     //ָ������ָ��


	int(*p[4])(int, int);          //ָ����ָ������� -����ָ������
	int(*(*pp)[4])(int, int) = &p; //ָ����ָ�������ָ��
	//pp��ָ��,ָ��ָ���������4��Ԫ��,ָ���������int(*)(int ,int)
	return 0;
}


