#include<stdio.h>
#include<stdlib.h>
struct a                            //��������ԭ��
{
	int a;
	int arr[];//������ int arr[0];
};


struct S                          //�������������
{
	int a;
	char* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
	int* str = realloc(ps->arr, 10 * sizeof(int));
	if (str != NULL)
	{
		ps->arr = str;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 5; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}