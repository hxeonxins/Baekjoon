#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int n = a/5;
    for(int i=0;i<n;i++){
        printf("V");
    }
    a = a%5;
    for(int i=0;i<a;i++){
        printf("I");
    }
    return 0;
}