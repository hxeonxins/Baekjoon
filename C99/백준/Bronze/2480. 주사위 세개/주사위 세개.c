#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int max= (a>b && a>c)?a:((b>a && b>c)?b:c);   
    if (a==b && b==c) {
        printf("%d", 10000+a*1000);
    } else if(a==b){
        printf("%d", 1000+a*100);
    } else if (b==c){
        printf("%d", 1000+b*100);
    } else if(a==c){
        printf("%d", 1000+c*100);
    } else {
        printf("%d", max*100);
    }
    return 0;
}