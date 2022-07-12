/**
 * _putchar - writes the char c to stdout.
 * @c: char to print.
 *
 * Return: 1 if correct and -1 if and error occured.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
