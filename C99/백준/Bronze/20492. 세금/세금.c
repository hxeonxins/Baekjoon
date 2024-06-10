#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.lf ", (double)n-n*0.22);
    printf("%.lf\n", (double)n*0.8+(n-(n*0.8))-(n-(n*0.8))*0.22);

    return 0;
}