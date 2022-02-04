#include<stdio.h>
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		while (arr[left] % 2 == 1)       //ÕÒÅ¼Êý
		{
			left++;
		}
		while (arr[right] % 2 == 0)  //ÕÒÆëÊý
		{
			right--;
		}
		if (left < right)
		{
			int temp = 0;
			temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}