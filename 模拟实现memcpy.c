#include <stdio.h>
#include <string.h>
#include<assert.h>
struct S
{
    int age;
    char name[20];
};
char* my_memcpy(char* arr2,const char* arr,int sz)
{
    assert(arr2);
    assert(arr);
    char* e = arr2;
    while (sz--)
    {
        *(char*)arr2 = *(char*)arr;
        ++(char*)arr2;
        ++(char*)arr;
    }
    return e;
}
int main()                                 
{
    struct S arr[1] = {20,"add"};
    struct S arr2[20] = {0};
    my_memcpy(arr2, arr, sizeof(arr));



    int ar[10] = { 1,23,4,5,6 };
    int ar1[50] = { 0 };
    my_memcpy(ar1, ar, sizeof(ar));
    return 0;
}


