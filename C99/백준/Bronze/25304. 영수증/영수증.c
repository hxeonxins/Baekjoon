#include <stdio.h>

int main(void) {
    int result, count, p1,p2, sum=0;
    scanf("%d\n%d", &result, &count);
    for(int i=0;i<count;i++){
        scanf("%d %d", &p1, &p2);
        sum += p1*p2;
    }
    printf(result == sum ? "Yes" : "No");
    return 0;
}