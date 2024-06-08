#include <stdio.h>
int main(){
    char school;
    scanf("%s", &school);
    if(school=='N'){
        printf("North London Collegiate School");
    } else if(school=='B'){
        printf("Branksome Hall Asia");
    } else if(school=='K'){
        printf("Korea International School");
    } else {
        printf("St. Johnsbury Academy");
    }
    
    return 0;
}