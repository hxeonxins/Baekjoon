//x==2ㅇ;ㄹ 때만 1출력
#include <stdio.h>
int main(void){
    int x;
    scanf("%d", &x);
    if(x%7==2)
        printf("%d", 1);
    else
        printf("%d", 0);
    
    return 0;
}