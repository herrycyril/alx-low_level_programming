#include <stdio.h>
/**
 * main -Entry
 * Description - Alphabets
 * Return 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int c;
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	while (c = 27; c < 52; c++)
	{
		putchar(alp[c]);
	}
	putchar('\n');
	return (0);
}
