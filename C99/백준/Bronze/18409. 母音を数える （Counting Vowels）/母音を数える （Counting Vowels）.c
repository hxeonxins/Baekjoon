#include <stdio.h>
int main(){
    int n,cnt=0;
    scanf("%d", &n);
    char s[n];
    for(int i=0;i<=n;i++){
        scanf("%c", &s[i]);
        if(s[i]=='a'){
            cnt++;
        }
        if(s[i]=='i'){
            cnt++;
        }
        if(s[i]=='u'){
            cnt++;
        }
        if(s[i]=='e'){
            cnt++;
        }
        if(s[i]=='o'){
            cnt++;
        }
    }
    printf("%d", cnt);
    
    return 0;
}