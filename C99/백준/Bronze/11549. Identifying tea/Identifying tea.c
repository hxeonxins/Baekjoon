#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    long long int a, cnt=0;
    while(scanf("%lld", &a)!=EOF){
        if(a==n) cnt++;
    }
    printf("%lld", cnt);
    return 0;
}