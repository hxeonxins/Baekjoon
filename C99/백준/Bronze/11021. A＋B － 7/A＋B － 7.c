#include <stdio.h>
int main(void){
    int a, n1, n2;
    scanf("%d", &a);
    for (int i = 1; i <= a; ++i) {
        scanf("%d %d", &n1, &n2);
        printf("Case #%d: %d\n", i, n1+n2);
    }

    return 0;
}