#include<stdio.h>
int check1()                          //方案一
{
	int a = 1;
	return *(short*)&a;
}

int check2()                     //方案二
{
	union S
	{
		char i;
		int a;
	}u;
	u.a=1;
	return u.i;
}
int main()
{
	int a = 1;
	int b=check();
	if (b == 1)
		printf("该设备是小端存储模式");
	else
		printf("该设备是大端存储模式");
	return 0;
}
