# include <stdio.h>

int main(){
    int n,a,b;
    scanf("%d %d %d", &n, &a, &b);
    printf(a>b?"Subway":(a<b?"Bus":"Anything"));
    
    return 0;
}