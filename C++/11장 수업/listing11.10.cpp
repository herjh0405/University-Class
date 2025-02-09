//Listing 11.9
/*  fgets3.c  -- using fgets() */
#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];
	int i;

	puts("Enter strings (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL
		&& words[0] != '\n')
	{
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;
		if (words[i] == '\n')
			words[i] = '\0';
		else // must have words[i] == '\0'
			while (getchar() != '\n')
				continue;
		puts(words);
	}
	puts("done");
	return 0;
}
//Listing 11.10   The  s_gets()  Function 
char* s_gets(char* st, int n)
{
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val)  // i.e., ret_val != NULL      {   
		while (st[i] != '\n' && st[i] != '\0')
			i++;
	if (st[i] == '\n')
		st[i] = '\0';
	else // must have words[i] == '\0'              while (getchar() != '\n')                  continue; 
	return ret_val;
}

