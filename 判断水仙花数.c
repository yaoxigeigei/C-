#include<stdio.h>                         
#include<math.h>
int main()
{
	int i = 0;                       
	for (i = 0; i < 10000; i++)         //列出所有数
	{
		//判断水仙花的位数
		int n = 1;
		int temp = i;
		while (temp /= 10)
		{
			n++;
		}
		//计算每n位上的和
		temp = i;
		int sum = 0;
		while (temp)
		{
			sum += (int)pow(temp % 10, n);
			temp = temp / 10;
		}
		if (sum == i)
			printf("%d ",sum);
	}
	return 0;
}