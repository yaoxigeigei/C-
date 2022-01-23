#include<stdio.h>
#include<assert.h>
int my_strlen(const char* arr)
{
	assert(*arr != NULL);
	int count = 0;
	while(*arr)
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdefg";
	printf("%d\n",my_strlen(arr));
	return 0;
}