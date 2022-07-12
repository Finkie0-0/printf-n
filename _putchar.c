/**
 * _putchar - writes the char c to stdout.
 * @c: char to print.
 *
 * Return: 1 if correct and -1 if and error occured.
 */
int _putchar(int c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
