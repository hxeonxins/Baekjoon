#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    if(n>=m){
        printf("%d", n+m);
    } else {
        printf("%d", m-n);
    }
    return 0;
}