#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int abc;
int ABC;
for (abc = 'a'; abc <= 'z'; abc++)
{
	putchar (abc);
}
for (ABC = 'A'; ABC <= 'Z'; ABC++)
{
	putchar (ABC);
}
putchar ('\n');
return (0);
}
