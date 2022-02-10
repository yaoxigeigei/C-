#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest,const void* src, int size)
{
    void* ret = dest;
    assert(dest!=NULL);
    assert(src != NULL);
    if (dest < src)
    {
        //dest在src前面
        while (size--)
        {
            *(char*)dest = *(char*)src;
            ++(char*)dest;
            ++(char*)src;
        }
    }
    else
    {
        //dest在src中间或者后面
        while (size--)
        {
            *((char*)dest + size) = *((char*)src + size);
        }
    }
    return ret;
}
int main()                                 
{
    int arr1[10] = { 5,2,3,4,5,6,7,8,9,10 };
    int arr2[20] = { 0 };
    my_memmove(arr2, arr1,sizeof(arr1));
    return 0;
}