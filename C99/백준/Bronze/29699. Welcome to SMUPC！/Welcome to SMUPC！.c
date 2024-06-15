#include <stdio.h>

int main() {
    char ch[]="WelcomeToSMUPC";
    int n;
    scanf("%d", &n);
    n--;
    n = n%14;
    printf("%c", ch[n]);

    return 0;
}