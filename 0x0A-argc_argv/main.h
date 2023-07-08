int _isdigit(char* s)
{

	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (1);
	}
	return (0);
}
