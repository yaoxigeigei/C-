#include<stdio.h>                         
#include<math.h>
int main()
{
	int i = 0;                       
	for (i = 0; i < 10000; i++)         //�г�������
	{
		//�ж�ˮ�ɻ���λ��
		int n = 1;
		int temp = i;
		while (temp /= 10)
		{
			n++;
		}
		//����ÿnλ�ϵĺ�
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