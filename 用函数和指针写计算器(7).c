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
void C(int(*p)(int, int))  //�ص�����	
{
	int a = 0, b = 0;
	printf("����������:");
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
		printf("��������Ҫ��������:");
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
			printf("�˳���Ϸ\n\n\n\n"); 
			break;
		default:printf("�������Ų��Ϸ�,����������:\n"); 
			goto again;
			break;
		}
	} while (input);
	return 0;
}






//����������
//#include<stdio.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int subtract(int a, int b)
//{
//	return a - b;
//}
//int multiply(int a, int b)
//{
//	return a * b;
//}
//int divide(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("***************************************\n");
//	printf("******   1:Add       2:subtract  ******\n");
//	printf("*********3:multiply  4:divide    ******\n");
//	printf("***********     0:exit     ************\n");
//	printf("***************************************\n");
//	printf("***************************************\n");
//}
//int main()
//{
//	int input = 0;
//	int a = 0, b = 0;
//	do
//	{	
//		menu();
//		printf("��������Ҫѡ���������:");
//		scanf_s("%d", &input);
//		if (input == 0) 
//		{
//			printf("�˳���Ϸ\n\n\n\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������:");
//			scanf_s("%d%d", &a, &b);
//			//����ָ������----�ֳ�ת�Ʊ�
//			int (*p[5])(int a, int b) = { 0,Add,subtract,multiply,divide };
//			printf("%d\n", p[input](a, b));
//		}
//		else
//		{
//			printf("��������кŷǷ�,����������");
//		}
//	} while (input);
//	return 0;
//}