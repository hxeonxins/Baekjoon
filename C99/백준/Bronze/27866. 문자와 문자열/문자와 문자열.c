#include <stdio.h>
int main(void){
    char ch[1001];
    int n;
    scanf("%s %d", ch, &n);
    printf("%c", ch[n-1]);

    return 0;
}