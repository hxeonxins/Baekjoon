//넓이는 항상 소수점 아래 첫 번째 자리까지 출력한다.
#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%.1lf", (a*b)/2.0);
    return 0;
}