int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = power;
	result = nb;
	if (i == 0 && nb == 0)
		return (1);
	if (i < 0)
		return (0);
	while (i > 1)
	{
		result = result * nb;
		printf ("%d\n", result);
		i--;
	}
	return (result);
}
