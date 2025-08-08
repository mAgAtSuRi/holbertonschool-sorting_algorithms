void print_square (int size)
{
	int i,j;
	if (size <= 0)
	{
		putchar("\n");
		return;
	}

	for (i = 0 < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar("#");
		putchar("\n");
	}
	return;
}
