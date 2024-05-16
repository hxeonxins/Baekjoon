#include <stdio.h>
int main(void){
    int n,arr, sum=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr);
        sum+=arr;
    }
    if(sum>0)
        printf("Right");
    else if(sum<0)
        printf("Left");
    else
        printf("Stay");
    
    return 0;
}