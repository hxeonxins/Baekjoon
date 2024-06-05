#include <stdio.h>
int main(void){
    int color;
    scanf("%d", &color);
    if(color >= 620 && color <= 780){
        printf("Red");
    } else if(color >= 590 && color < 620) {
        printf("Orange");
    } else if(color >= 570 && color < 590){
        printf("Yellow");
    } else if(color >= 495 && color <570){
        printf("Green");
    } else if(color >= 450 && color < 495){
        printf("Blue");
    } else if(color >= 425 && color < 450){
        printf("Indigo");
    } else {
        printf("Violet");
    }
    
    return 0;
}