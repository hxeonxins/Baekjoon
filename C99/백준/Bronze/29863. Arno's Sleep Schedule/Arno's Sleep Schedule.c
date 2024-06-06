#include <stdio.h>
int main(void){
    int h,sleep;
    scanf("%d%d", &h, &sleep);
    h = 24-h;
    sleep += h;
    if(sleep > 23){
        sleep -= 24;
    }
    printf("%d", sleep);
    return 0;
}