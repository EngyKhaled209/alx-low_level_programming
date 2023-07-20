/**
 * _isupper - Entry point
 * @c: is a character
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
