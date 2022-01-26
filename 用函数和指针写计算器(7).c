#include<stdio.h>
void menu()
{
	printf("***************************************\n");
	printf("******   1:Add       2:subtract  ******\n");
	printf("*********3:multiply  4:divide    ******\n");
	printf("***********     0:exit     ************\n");
	printf("***************************************\n");
	printf("***************************************\n");
}
int Add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b)
{
	return a - b;
}
int multiply(int a, int b)
{
	return a * b;
}
int divide(int a, int b)
{
	return a / b;
}
void C(int(*p)(int, int))  //回调函数	
{
	int a = 0, b = 0;
	printf("输入两个数:");
	scanf_s("%d%d", &a, &b);
	printf("%d\n", p(a, b));
}
int main()
{
	int input = 0;
	int a = 0, b = 0;
	do
	{
		menu();
		again:
		printf("请输入你要的序列数:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			C(Add); 
			break;
		case 2:
			C(subtract);
			break;
		case 3:
			C(multiply);
			break;
		case 4:
			C(divide);
			break;
		case 0:
			printf("退出游戏\n\n\n\n"); 
			break;
		default:printf("输入的序号不合法,请重新输入:\n"); 
			goto again;
			break;
		}
	} while (input);
	return 0;
}






进化计算器
#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b)
{
	return a - b;
}
int multiply(int a, int b)
{
	return a * b;
}
int divide(int a, int b)
{
	return a / b;
}
void menu()
{
	printf("***************************************\n");
	printf("******   1:Add       2:subtract  ******\n");
	printf("*********3:multiply  4:divide    ******\n");
	printf("***********     0:exit     ************\n");
	printf("***************************************\n");
	printf("***************************************\n");
}
int main()
{
	int input = 0;
	int a = 0, b = 0;
	do
	{	
		menu();
		printf("请输入你要选择的序列数:");
		scanf_s("%d", &input);
		if (input == 0) 
		{
			printf("退出游戏\n\n\n\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:");
			scanf_s("%d%d", &a, &b);
			//函数指针数组----又称转移表
			int (*p[5])(int a, int b) = { 0,Add,subtract,multiply,divide };
			printf("%d\n", p[input](a, b));
		}
		else
		{
			printf("输入的序列号非法,请重新输入");
		}
	} while (input);
	return 0;
}
