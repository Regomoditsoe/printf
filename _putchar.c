#include "main.h"
/**
 * main - Main function
 *
 * Return: integer
 */
int main(void)
{
    int printed_chars;

    printed_chars = _printf("Hello, %s! Today is %c. The number is %d\n", "Alice", 'M', 42);
    printf("Number of characters printed: %d\n", printed_chars);
    return (0);
}


/**
 * _putchar - prints characters
 * @c: the input character
 * Return: the written character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

}
