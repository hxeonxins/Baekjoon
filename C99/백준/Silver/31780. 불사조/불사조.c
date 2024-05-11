#include <stdio.h>
int main(void){
    int n,m,sum=0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i <= m; ++i) {
        sum+=n;
    }
    printf("%d", sum);

    return 0;
}