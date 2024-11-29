#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d %d", &a, &b);
        if(a>=b) printf("MMM BRAINS\n");
        else printf("NO BRAINS\n");
    }
    return 0;
}