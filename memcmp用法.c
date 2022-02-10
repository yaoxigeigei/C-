#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()                                 
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,5,4};
    printf("%d", memcmp(arr1, arr2, 12));
    return 0;
}