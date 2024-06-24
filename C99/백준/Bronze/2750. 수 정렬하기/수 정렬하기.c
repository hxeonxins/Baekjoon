#include <stdio.h>

int main() {
    int n, temp, a[1001];
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d\n", a[i]);
    }

    return 0;
}