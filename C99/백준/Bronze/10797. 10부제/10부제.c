#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int carNum, sum=0;
    for(int i=0;i<5;i++){
        scanf("%d", &carNum);
        if(carNum==n){
            sum++;
        } else if(carNum+10==n){
            sum++;
        } else if(carNum+20==n){
            sum++;
        } else {
            continue;
        }
    }
    printf("%d", sum);
    
    return 0;
}