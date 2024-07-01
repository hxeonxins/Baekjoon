#include <stdio.h>
int a, b, c;
int main(){
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) printf("*");
    else if(a == b) printf("C");
    else if(a == c) printf("B");
    else if(b == c) printf("A");
    
    return 0;
}