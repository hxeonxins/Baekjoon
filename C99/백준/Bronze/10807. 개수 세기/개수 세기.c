#include "stdio.h"
int main(){
    int n, arr[101], sum=0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int a;
    scanf("%d", &a);
    for (int i = 0; i < n; ++i) {
        if(arr[i]==a){
            sum++;
        }
    }
    printf("%d", sum);

    return 0;
}