#include <stdio.h>
int main(){
    int menu[4],chose[4],sum=0;
    for(int i=0;i<3;i++){
        scanf("%d", &menu[i]);
    }
    for(int i=0;i<3;i++){
        scanf("%d", &chose[i]);
    }
    for(int i=0;i<3;i++){
        if(menu[i]<chose[i]){
            sum+=chose[i]-menu[i];
        }
    }
    printf("%d", sum);
    
    return 0;
}