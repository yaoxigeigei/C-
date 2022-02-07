#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
//杨氏矩阵 有一个二维数组.数组的每行从左到右是递增的
//每列从上到下是递增的.在这样的数组中查找一个数字是否存在
//时间复杂度小于O(N)
//1 2 3
//2 3 4
//3 4 5
int FindNum(int arr[3][3],int k,int* px,int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x<=*px-1&&y>=0)
	{
		if (k > arr[x][y])
		{
			x++;
		}
		else if (k < arr[x][y])
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int k = 0;
	int arr[3][3] = { {1,2,3,}, {2,3,4}, {3,4,5} };
	int x=3;
	int y = 3;
	printf("请输入你要查找的数字:");
	scanf_s("%d", &k);
	int net=FindNum(arr,k,&x,&y);
	if (net == 1)
	{
		printf("找到了下标是%d %d",x,y);

	}
	else
		printf("该矩阵中不存在该数字");
	return 0;
}