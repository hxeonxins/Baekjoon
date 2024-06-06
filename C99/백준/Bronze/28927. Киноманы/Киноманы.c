#include <stdio.h>
int main(void){
    int a1,b1,c1;
    int a2,b2,c2;
    scanf("%d%d%d%d%d%d", &a1,&b1,&c1,&a2,&b2,&c2);
    int sum1 = a1*3+b1*20+c1*120;
    int sum2 = a2*3+b2*20+c2*120;
    printf(sum1>sum2?"Max":(sum1<sum2?"Mel":"Draw"));
    return 0;
}