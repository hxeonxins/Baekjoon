#include <stdio.h>
int main(void){
    int n, a;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        printf("%d %d\n", a, a);
    }
    
    return 0;
}