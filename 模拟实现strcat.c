#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcat(char* arr1,const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	int size = (int)strlen(arr1);
	char* a = arr1;
	char* temp = arr1 + size;
	while(*temp++ = *arr2++)
	{
		;
	}
	return arr1;
}
int main()
{
	char arr1[50] = "abcd";
	char arr2[] = "efgh";
	printf("%s", my_strcat(arr1, arr2));
	return 0;
}