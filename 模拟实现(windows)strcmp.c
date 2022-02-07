#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char * arr1,const char* arr2)
{
	assert(arr1);
	assert(arr2);
	int sz1 = (int)strlen(arr1);
	int sz2 = (int)strlen(arr2);
	while (*arr1 == *arr2)
	{
		arr1++;
		arr2++;
		if (*arr1==0&&*arr2==0)
			return 0;
	}
	if ((*arr1 - *arr2) > 0)
		return 1;
	else
		return -1;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdefa";
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}