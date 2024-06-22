#include <stdio.h>
int main(void)
{
    int std[31] = {0};
    int num;

    for (int i = 0; i < 28; i++) {
        scanf("%d", &num);
        std[num] = num;
    }
    for (int i = 1; i < 31; i++) {
        if (std[i] == 0)
            printf("%d\n", i);
    }


    return 0;
}