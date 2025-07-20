/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuteetha <vuteetha@student.42Bangkok.th    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:03:29 by vuteetha          #+#    #+#             */
/*   Updated: 2025/07/20 15:03:29 by vuteetha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Repeated Subtraction Method of Square Root
// https://www.cuemath.com/algebra/squares-and-square-roots/
int	ft_sqrt(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		count++;
	}
	if (nb == 0)
		return (count);
	return (0);
}
/* 
#include <stdio.h>

int	main(void)
{
	printf("%d\n" , ft_sqrt(16));
	return (0);
} */