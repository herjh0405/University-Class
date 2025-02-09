//Listing 12.6
// partb.c -- rest of the program
// compile with parta.c
#include <stdio.h>
//file scope, external linkage, static storage duration
extern int count;       // reference declaration, external linkage, static storage duration, defining declaration�̶� �Ѵ�
// file scope variable
static int total = 0;   // static definition, internal linkage, static storage duration
void accumulate(int k); // prototype

void accumulate(int k)  // k has block scope, no linkage
{
	static int subtotal = 0;  // static storage duration, no linkage, block scope

	if (k <= 0)
	{
		printf("loop cycle: %d\n", count);
		printf("subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}
