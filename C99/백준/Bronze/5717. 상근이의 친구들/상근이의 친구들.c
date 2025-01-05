#include <stdio.h>
int main(){
    int a,b;
    while(1){
        scanf("%d %d", &a, &b);
        if(a+b){
            int sum = a+b;
            printf("%d\n", sum);
        } else {
            break;
        }
    }
    return 0;
}