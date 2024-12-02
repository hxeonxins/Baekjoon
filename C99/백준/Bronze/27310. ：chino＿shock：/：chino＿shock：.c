#include <stdio.h>
#include <string.h>
int main(){
    int cnt=0, col=0, under=0;
    
    char ch[32];
    scanf("%s", ch);
    for(int i = 0; ch[i]; i++) {
        if(ch[i]=='_') under++;
        else if(ch[i]==':') col++;
        cnt++;
    }
    printf("%d", cnt+col+under*5);
    return 0;
}