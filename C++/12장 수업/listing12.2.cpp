// Listing 12.2 forc99.c -- new C99 block rules
#include <stdio.h>
int main()
{
	int n = 8;

	printf("   Initially, n = %d at %p\n", n, &n);
	for (int n = 1; n < 3; n++) //n은 for block에만 적용
		printf("      loop 1: n = %d at %p\n", n, &n);
	printf("After loop 1, n = %d at %p\n", n, &n);
	for (int n = 1; n < 3; n++)
	{
		printf(" loop 2 index n = %d at %p\n", n, &n);
		//int n = 6;//C99
		printf("      loop 2: n = %d at %p\n", n, &n);
		n++;//n은 for  문의 n 증가됨
	}
	printf("After loop 2, n = %d at %p\n", n, &n);
	getchar();
	return 0;
}
