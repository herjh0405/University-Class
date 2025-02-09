//Listing 10.17 The array2d.c Program
// array2d.c -- functions for 2d arrays
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int[][COLS], int); // ok to omit names
int sum2d(int(*ar)[COLS], int rows); // another syntax

int main(void)
{
	int junk[ROWS][COLS] = {
		{ 2,4,6,8 },
		{ 3,5,7,9 },
		{ 12,10,8,6 }
	};
	sum_rows(junk, ROWS);
	sum_cols(junk, ROWS);
	printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
	system("pause");
	return 0;
}
void sum_rows(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;
	for (r = 0; r < rows; r++)
	{
		tot = 0;
		for (c = 0; c < COLS; c++)
		{
			//tot += (ar)[r][c]; printf("ar = %d\n", (ar)[r][c]);
			tot += *(*(ar + r) + c);
			printf("ar = %d\n", *(*(ar + r) + c));
		}
		printf("row %d: sum = %d\n", r, tot);
	}
}
void sum_cols(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;
	for (c = 0; c < COLS; c++)
	{
		tot = 0;
		for (r = 0; r < rows; r++)
			tot += ar[r][c];
		printf("col %d: sum = %d\n", c, tot);
	}
}
int sum2d(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot = 0;
	for (r = 0; r < rows; r++)		/// loop through rows
	{
		for (c = 0; c < COLS; c++) //// loop through columns
			tot += ar[r][c];
	}
	return tot;
}

