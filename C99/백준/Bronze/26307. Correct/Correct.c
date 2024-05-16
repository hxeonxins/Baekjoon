#include <stdio.h>
int main(void){
    int h,m,sum;
    scanf("%d %d", &h, &m);
    if(h>9){
        h -= 9;
        h *= 60;
        sum = h+m;
        printf("%d", sum);
    }else{
        printf("%d", m);
    }
    return 0;
}