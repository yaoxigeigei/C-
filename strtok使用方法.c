#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	char arr[] = "192.168.0.1";
	char* a = ".";
	char buf[200] = { 0 };
	strcpy(buf, arr);
	char* e=NULL;
	for (e = strtok(buf, a); e != NULL; e = strtok(NULL, a))
	{
		printf("%s ", e);
	}
	return 0;
}
