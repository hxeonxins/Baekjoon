#include <stdio.h>
int main(void){
    char ch[3];
    for(int i=0;i<3;i++){
        scanf("%c", &ch[i]);
    }
    for(int i=2;i>=0;i--){
        printf("%c", ch[i]);
    }
    return 0;
}