#include<stdio.h>
#include<assert.h>
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
int main()
{
	int i = 0;
	 again:
	scanf_s("%d", &i);
	assert(i);
	if (i % 2 == 0)
	{
		printf("���β�����ż��,����������");
		goto again;
	}
	else
	{
		int a = (i - 1) / 2;
		//�ȴ�ӡ�����һ��
		for (int b = 0; b < a; b++)
		{
			for (int j = 0; j < a - b; j++)
			{
				printf(" ");
			}
			for (int q = 0; q < b * 2 + 1; q++)
			{
				printf("*");
			}
			printf("\n");
		}
		//��ӡ�м�һ��
		for (int y = 0; y <a*2+1; y++)
		{
			printf("*");
		}
		printf("\n");
		//��ӡ�����һ��
		for (int t = 0; t < a; t++)
		{
			for (int p = 0; p < t + 1; p++)
			{
				printf(" ");
			}
			for (int r = 0; r <  ((a-t)-1)*2+1 ; r++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}