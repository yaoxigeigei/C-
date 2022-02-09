#include <stdio.h>
#include <string.h>
int main()                                 
{
    char a[] = "ADDAfaafaFFfffwfFww";
    int i = 0;
    while(a[i])
    {
        if (isupper(a[i]))
        {
            a[i] = tolower(a[i]);
        }
        i++;
    }
    printf("%s", a);
    return 0;
}


