#include <stdio.h>
int main(){
    int n,sum=0;
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        for(int i=n;i>0;i--){
            sum+=i;
        }
        printf("%d\n", sum);
        sum=0;
    }
    
    return 0;
}