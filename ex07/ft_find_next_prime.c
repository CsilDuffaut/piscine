int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return 0;
	while (i >= 2 && i < nb)	
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}	
	return (nb);
}
