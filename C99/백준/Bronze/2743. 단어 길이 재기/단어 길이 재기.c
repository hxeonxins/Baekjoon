#include <stdio.h>
int main(void){
    char ch[1001];
    int sum=0;
    scanf("%s", ch);
    for(int i=0; ch[i]!='\0';i++){
        sum++;
    }
    printf("%d", sum);

    return 0;
}