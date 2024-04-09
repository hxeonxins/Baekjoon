#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d\n%d", &a, &b);
    int n1=a * (b%10);
    int n2=a * (b%100/10);
    int n3=a * (b/100);
    printf("%d\n%d\n%d\n%d", n1, n2, n3, n1+n2*10+n3*100);

    return 0;
}