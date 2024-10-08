#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int d, sum=0;
    for(int i=0;i<n;i++){
        scanf("%d", &d);
        if(d%2!=0)
            sum++;
    }
    
    printf("%d", sum);
    return 0;
}