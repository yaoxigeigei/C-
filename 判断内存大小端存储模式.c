#include<stdio.h>
//int check()                           //方案二
//{
//	int a = 1;
//	short* b = (short*)&a;
//	return *b;
//}
int check()                             //优化方案三
{
	int a = 1;
	return *(short*)&a;
}
int main()
{
	//int a = 1;                            //方案一
	//char* b = (char*)&a;
	//if (*b == 0)
	//	printf("该设备为大端存储模式");
	//else
	//	printf("该设备为小端存储模式");

	//写一个判断大小端的函数
	//如果返回1则是小端 返回0则是大端
	int a = 1;
	int b=check();
	if (b == 1)
		printf("该设备是小端存储模式");
	else
		printf("该设备是大端存储模式");
	return 0;
}