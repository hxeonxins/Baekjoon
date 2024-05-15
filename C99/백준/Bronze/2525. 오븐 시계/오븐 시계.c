#include <stdio.h>
int main(void){
    int h, m, c;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);
    m+=c;
    while(m>=60){
        h++;
        m-=60;
    }
    if(h>23){
        h-=24;
    }

    printf("%d %d", h, m);

    return 0;

}