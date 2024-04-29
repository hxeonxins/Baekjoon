#include <stdio.h>
#include <string.h>
int main(void){
    char ch[101];
    scanf("%s", ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z'){
            printf("%c", ch[i]+32);
        }else if(ch[i]>='a'&&ch[i]<='z'){
            printf("%c", ch[i]-32);
        }else{
            printf("%c",ch[i]);
        }
    }
    return 0;
}