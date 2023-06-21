#include <unistd.h>

/**
 * main - Entry point 
 *
 * Descrtiption: prints _putchar using prutchar prototype
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *str = "_putchar\n";
	char output[] = "_putchar";
	int i;

	for (i = 0; output[i] != '\0'; i++)
		write(1, &output[i], 1);

	write(1, "\n", 1);

	return (0);
}

