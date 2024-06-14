#include <stdio.h>
#include <string.h>

int main(){
    char ch[2001];
    int n;
    scanf("%d", &n);
    while(n--){
        scanf("%s", ch);
        if(strlen(ch)>=6 && strlen(ch)<=9){
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    
    return 0;
}