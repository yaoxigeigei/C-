#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };//[]的优先级大于*的优先级
	int (* p)[5] = &arr;//把数组的地址存起来
	//上面的p就是数组指针
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ",(*p)[i]);
	}
	printf("\n");
	return 0;
}