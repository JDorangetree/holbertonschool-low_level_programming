/**
 * print_name - Function prints a name
 * @name: String nombre
 * @f: Pointer to funtion
 *
 * Description: Function that prints a name
 * Return: Empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
