#include <stdio.h>
int main(void){
    int a,b,c,mid;
    scanf("%d%d%d", &a,&b,&c);
    mid=((a>=b && a<=c) || (a<=b && a>=c))?a:((b>=a && b<=c) || (b<=a && b>=c)?b:c);
    printf("%d",mid);
    
    return 0;
}