#include<stdio.h>
void sort(int arr[], int sz)
{
	int a = 0;
	for (a = 0; a < sz - 1; a++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - a; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}




#include<stdio.h>
int main()
{

	return 0;
}
