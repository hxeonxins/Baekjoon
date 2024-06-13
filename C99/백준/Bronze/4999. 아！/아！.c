#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[1001];
    char ch2[1001];
    scanf("%s %s", ch1, ch2);

    if(strlen(ch1)<strlen(ch2)) {
		printf("no");
	} else {
	    printf("go");
	}

    return 0;
}