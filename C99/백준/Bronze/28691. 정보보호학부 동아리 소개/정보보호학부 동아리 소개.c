#include <stdio.h>
int main(){
    char club;
    scanf("%c", &club);
    if(club=='M'){
        printf("MatKor");
    } else if(club=='W'){
        printf("WiCys");
    } else if(club=='C'){
        printf("CyKor");
    } else if(club=='A'){
        printf("AlKor");
    } else if(club=='$'){
        printf("$clear");
    }
    return 0;
}