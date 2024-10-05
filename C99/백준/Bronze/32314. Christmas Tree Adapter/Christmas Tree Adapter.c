#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int a,b;
    scanf("%d %d", &a, &b);
    
    int sum = a/b;
    if(sum>=n)
        printf("1");
    else
        printf("0");
    return 0;
}