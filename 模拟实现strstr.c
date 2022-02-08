#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* p1,const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	int temp = (int)strlen(p2);
	if (*p1=='\0')
	{
		return p1;
	}
	while (*p1)
	{
		while (*p1 == *p2)
		{
			p1++; p2++;
			if (*p2 == '\0')
			{
				p1=p1 - temp;
				return p1;
			}
			if (*p1 != *p2)
			{
				p2--;
			}
		}
		p1++;
	}
	return NULL;
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "";
	char* e=my_strstr(p1, p2);
	if (e == NULL)
	{
		printf("²»ÊÇ\n");
	}
	else
	{
		printf("ÊÇµÄ\n");
		printf("%s", e);
	}
	return 0;
}
