#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };//[]�����ȼ�����*�����ȼ�
	int (* p)[5] = &arr;//������ĵ�ַ������
	//�����p��������ָ��
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ",(*p)[i]);
	}
	printf("\n");
	return 0;
}