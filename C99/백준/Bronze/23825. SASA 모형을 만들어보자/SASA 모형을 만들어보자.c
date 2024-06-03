#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    if(n<m){
        printf("%d", n/2);
    } else if(n>m){
        printf("%d", m/2);
    } else {
        printf("%d", n/2);
    }
    
    return 0;
}