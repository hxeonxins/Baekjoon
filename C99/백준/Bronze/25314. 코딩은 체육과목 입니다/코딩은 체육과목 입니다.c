#include <stdio.h>

int main(void) {
    int b;
    scanf("%d", &b);
    for (int i=0; i<b/4; i++) {
        printf("long ");
    }
    printf("int");
    
    return 0;
}