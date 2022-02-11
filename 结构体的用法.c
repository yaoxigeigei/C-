#define _CRT_SECURE_NO_WARNINGS    //传参尽量传地址
#include <stdio.h>
#include<string.h>
struct stu {
    char c;
    int age;
};
void init(struct stu* pa)
{
    pa->c = 'a';
    pa->age = 20;
}
void print(struct stu* pa)
{
    printf("%c\n", pa->c);
    printf("%d\n", pa->age);
}
int main()                                 
{
    struct stu s;
    init(&s);
    print(&s);
    return 0;
}