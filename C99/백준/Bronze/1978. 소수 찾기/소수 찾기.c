#include <stdio.h>

int main() {
    int n,a,sum=0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        for(int j=2; j<=a; j++){
            if(a==j){
                sum++;
            }
            if(a%j==0){
                break;
            }
        }
    }

    printf("%d", sum);
    
    return 0;
}