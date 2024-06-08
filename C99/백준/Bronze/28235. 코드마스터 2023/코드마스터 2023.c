#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch=='S'){
        printf("HIGHSCHOOL");
    } else if(ch=='C'){
        printf("MASTER");
    } else if(ch=='2'){
        printf("0611");
    } else {
        printf("CONTEST");
    }
    
    return 0;
}