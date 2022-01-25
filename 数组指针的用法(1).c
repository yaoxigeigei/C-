#include<stdio.h>
//int main()
//{
//	//int arr[5] = { 1,2,3,4,5 };//[]的优先级大于*的优先级
//	//int (* p)[5] = &arr;//把数组的地址存起来
//	//上面的p就是数组指针
//	
//	//int i = 0;                    //太麻烦基本不用
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ",(*p)[i]);
//	//}
//	//printf("\n");
//
//	//int i = 0;                   //太麻烦基本不用
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *(*p + i));//*p就相当于找到了arr的第一个地址
//	//}
//
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *(p + i)); //直接取数组的第一个地址
//	//}
//	return 0;
//}



//void print1(int (*p)[3][5], int a, int b)  //利用函数方法一
//{
//	int i = 0, j = 0;                //利用指针打印二维数组
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*p)[i][j]);
//		}
//		printf("\n");
//	}
//	
//}

//void print2(int arr[3][5],int a,int b)               //函数利用方案二
//{
//	int i = 0, j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

void print3(int (*p)[5], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		int j = 0;
		for (j = 0; j < b; j++)
		{
			printf("%d ",*(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	/*数组指针多用于二维数组*/
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//int i = 0, j = 0;                //利用指针打印二维数组
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", (*p)[i][j]);
	//	}
	//	printf("\n");
	//}
	//print1(&arr, 3, 5);                      //利用函数打印   方案一
	
	
	//print2(arr, 3, 5);                         //利用函数打印   方案二
	
	print3(arr,3,5);                          //利用函数打印   方案三
	return 0;
}