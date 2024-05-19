#include <stdio.h>
int main(void){
    int w,h;
    scanf("%d%d", &w, &h);
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}