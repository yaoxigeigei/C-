#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
//���Ͼ��� ��һ����ά����.�����ÿ�д������ǵ�����
//ÿ�д��ϵ����ǵ�����.�������������в���һ�������Ƿ����
//ʱ�临�Ӷ�С��O(N)
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
	printf("��������Ҫ���ҵ�����:");
	scanf_s("%d", &k);
	int net=FindNum(arr,k,&x,&y);
	if (net == 1)
	{
		printf("�ҵ����±���%d %d",x,y);

	}
	else
		printf("�þ����в����ڸ�����");
	return 0;
}