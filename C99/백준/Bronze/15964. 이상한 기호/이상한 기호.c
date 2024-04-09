//A＠B = (A+B)×(A-B)
#include <stdio.h>
int sum(int a, int b){
    int result = (a+b)*(a-b);
    return result;
}
int main(void){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", sum(n1,n2));
    return 0;
}