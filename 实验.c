#include<stdio.h>
#include<string.h>
typedef struct stu
{
	char name[10];
	char xinbie[3];

}stu;
void print1(stu* s)
{
	printf("%s\n", s->name);
	printf("%s\n", s->xinbie);
}
int main()
{
	stu s = { "Ö±½Ó","ÄÐ" };
	print1(&s);
	return 0;
}