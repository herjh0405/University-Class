//Listing 12.4
/* global.c  -- uses an external variable */
#include <stdio.h>
int units = 0;         /* an external variable      */
void critic(void);
int main(void)
{
	extern int units;  /* an optional redeclaration */

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);//external 변수 사용
	while (units != 56)
		critic();
	printf("You must have looked it up!\n");
	getchar();
	return 0;
}

void critic(void)
{
	/* optional redeclaration omitted */
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &units);//external 변수사용
}
