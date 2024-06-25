#include <stdio.h>

int main() {
    int n, temp, a[1000001];
    for(int i=1;i<=3;i++){
        scanf("%d", &a[i]);
    }
    for(int i=1;i<3;i++){
        for(int j=1;j<3;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=1;i<=3;i++){
        printf("%d ", a[i]);
    }

    return 0;
}