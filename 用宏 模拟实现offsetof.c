#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#define OFFSETOF(a ,b) (int)&(((a*)0)->b)
struct S
{
	char a;
	int b;
	char c;
};
int main()
{
	printf("%d",OFFSETOF(struct S, c));
	return 0;
}