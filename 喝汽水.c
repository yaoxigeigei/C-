#include<stdio.h>
//一瓶汽水1元,2个空瓶可以换一瓶汽水,支付多少钱可以喝多少瓶汽水
int main()
{
	int money = 0;
	printf("请输入你有多少钱买汽水:");
	scanf_s("%d", &money);
	int Drunk = money;
	int empty = money;
	while (empty >= 2)
	{
		Drunk += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("一共能喝%d瓶汽水\n", Drunk);
	return 0;
}