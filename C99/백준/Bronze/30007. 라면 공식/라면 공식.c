#include <stdio.h>
int main(){
    int a,b,x,n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &a, &b, &x);
        printf("%d\n", a*(x-1)+b);
    }
    
    return 0;
}