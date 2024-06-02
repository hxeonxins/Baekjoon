//A와 B의 크기를 비교하고, A <B이면 -1을, A = B이면 0을, A> B이면 1을 출력하십시오.
#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", a<b?-1:(a>b?1:0));
    
    return 0;
}