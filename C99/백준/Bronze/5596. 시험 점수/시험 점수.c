#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum1=a+b+c+d;
    
    int e,f,g,h;
    scanf("%d %d %d %d", &e, &f, &g, &h);
    int sum2=e+f+g+h;
    
    printf("%d", sum1>sum2?sum1:sum2);
    
    return 0;
}