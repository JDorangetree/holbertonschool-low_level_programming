#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
int d;
long int r;
long long int k;
float f;
printf("Size of a char: %d  byte(s)\n", (int)sizeof(i));
printf("Size of an int: %d  byte(s)\n", (int)sizeof(d));
printf("Size of a long int: %d  byte(s)\n", (int)sizeof(r));
printf("Size of a long long int: %d  byte(s)\n", (int)sizeof(k));
printf("Size of a float: %d  byte(s)\n", (int)sizeof(f));
return (0);
}
