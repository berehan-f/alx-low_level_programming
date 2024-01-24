/**
 * print_name - prints a name.
 * @name: name to print.
 * @f: callback function that prints name in specific way.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name || f)
		f(name);
}
