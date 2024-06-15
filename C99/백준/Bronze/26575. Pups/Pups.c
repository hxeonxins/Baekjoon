#include <stdio.h>
int main(){
    int n;
    double d,e,f;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%lf %lf %lf", &d, &e, &f);
        double cost = d*e*f;
        printf("$%.2lf\n", cost);
    }
    
    return 0;
}