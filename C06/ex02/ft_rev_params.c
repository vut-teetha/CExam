/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuteetha <vuteetha@student.42Bangkok.th    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:22:31 by vuteetha          #+#    #+#             */
/*   Updated: 2025/07/21 08:22:31 by vuteetha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
int	ft_count_params(char **argv)
{
	int	count;

	count = 0; 
	while (*argv)
	{
		count++;
		argv++;
	}
	return (count);
}
int	main(int argc, char **argv)
{
	int	count_params;

	count_params = 0;
	if (argc >= 2)
	{
		count_params = ft_count_params(argv) - 1;
		while (count_params >= 1)
		{
			ft_putstr(argv[count_params--]);
			ft_putchar('\n');
		}
	}
	return (0);
}
