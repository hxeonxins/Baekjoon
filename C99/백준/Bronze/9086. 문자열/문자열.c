#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    char ch[101];
    scanf("%d", &a);
    while(a--) {
		scanf("%s", ch);

		printf("%c%c \n", ch[0], ch[strlen(ch) - 1]);
	}

    return 0;
}