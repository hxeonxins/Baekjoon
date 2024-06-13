#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a%5==0)
        a = a/5;
    else
        a = a/5+1;
    printf("%d", a);

    return 0;
}