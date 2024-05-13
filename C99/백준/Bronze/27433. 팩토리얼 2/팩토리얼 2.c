#include <stdio.h>
int main(void){
    long int n, sum=1;
    scanf("%ld", &n);
    for(int i=1;i<=n;i++){
        sum *= i;
    }
    printf("%ld", sum);

    return 0;
}