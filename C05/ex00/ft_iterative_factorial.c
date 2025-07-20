/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuteetha <vuteetha@student.42Bangkok.th    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 08:35:18 by vuteetha          #+#    #+#             */
/*   Updated: 2025/07/20 08:35:18 by vuteetha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 1)
	{
		res *= nb;
		--nb;
	}
	return (res);
}

/* 
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
	return (0);
} */
