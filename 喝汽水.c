#include<stdio.h>
//һƿ��ˮ1Ԫ,2����ƿ���Ի�һƿ��ˮ,֧������Ǯ���Ժȶ���ƿ��ˮ
int main()
{
	int money = 0;
	printf("���������ж���Ǯ����ˮ:");
	scanf_s("%d", &money);
	int Drunk = money;
	int empty = money;
	while (empty >= 2)
	{
		Drunk += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("һ���ܺ�%dƿ��ˮ\n", Drunk);
	return 0;
}