void	ccompression(int *num, int args)
{
	int		tmp;
	size_t	n;
	size_t	i;

	i = 0;
	while (i < (size_t)args - 1)
	{
		n = 0;
		while (n < (size_t)args - 1)
		{
			if (num[n] > num[n + 1])
			{
				tmp = num[n];
				num[n] = num[n + 1];
				num[n + 1] = tmp;
			}
			n++;
		}
		i++;
	}
}
