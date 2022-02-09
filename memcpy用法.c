#include <stdio.h>
#include <string.h>
struct S
{
    int age;
    char name[20];
};
int main()                                 
{
    struct S arr[1] = {20,"add"};
    struct S arr2[3] = {0};
    memcpy(arr2, arr, sizeof(arr));
    return 0;
}


