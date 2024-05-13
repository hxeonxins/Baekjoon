#include <stdio.h>
int main(void){
    int n,sum=0;
    scanf("%d", &n);
    for (int i = 1; i <=n; ++i) {
        sum+=i;
    }
    printf("%d\n%d\n%d", sum, sum*sum, sum*sum);

    return 0;
}