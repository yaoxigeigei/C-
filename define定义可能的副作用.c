#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a++ , b++);
	//上面代码相当于int max=((a++)>(b++)?(a++):(b++));
	printf("%d\n", max);  //12
	printf("%d\n", a);    //11
	printf("%d\n", b);    //13
	return 0;
}