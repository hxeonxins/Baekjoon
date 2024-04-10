#include <stdio.h>
int main(void){
    int n1, n2, n3=0;
    scanf("%d", &n1);
    for(int i=0;i<n1;i++){
        scanf("%1d", &n2);
        n3 += n2;
    }
    printf("%d", n3);    
    return 0;
}