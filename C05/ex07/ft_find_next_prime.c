int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (nb <= 2147483647)
	{
		++nb;
		if (ft_is_prime(nb))
			return (nb);
	}
	return (0);
}
/* 
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(2));
	return (0);
} */
