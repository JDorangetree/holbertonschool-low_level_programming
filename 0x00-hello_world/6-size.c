#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
int d;
long int l;
long long int k;
float f;
printf("Size of a char: %ld  byte(s)\n", (long)sizeof(i));
printf("Size of an int: %ld  byte(s)\n", (long)sizeof(d));
printf("Size of a long int: %ld  byte(s)\n", (long)sizeof(l));
printf("Size of a long long int: %ld  byte(s)\n", (long)sizeof(k));
printf("Size of a float: %ld  byte(s)\n", (long)sizeof(f));
return (0);
}
