#include <stdio.h>

int main(void) {
	int course[4] = {0, };
	int time=0, second=0, minute = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &course[i]);
		time += course[i];
	} 
	minute = time / 60;
	second = time % 60;
	printf("%d\n%d", minute, second);

	return 0;
    
}