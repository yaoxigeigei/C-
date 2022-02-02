#include<stdio.h>
#include<string.h>
#include<assert.h>
void exchange(char* arr)
{
	assert(arr);
	int len = (int)strlen(arr);
	char* left = arr;
	char* right = arr + len - 1;
	while (left<right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = {0};
	gets(arr);
	exchange(arr);
	printf("%s\n", arr);
	return 0;
}