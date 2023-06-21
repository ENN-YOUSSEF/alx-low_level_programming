#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" using the _putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar";
    int ch;

    for (ch = 0; ch < 8; ch++)
        putchar(str[ch]);

    putchar('\n');

    return (0);
}


