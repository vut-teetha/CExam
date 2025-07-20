/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuteetha <vuteetha@student.42Bangkok.th    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:58:16 by vuteetha          #+#    #+#             */
/*   Updated: 2025/07/19 20:58:16 by vuteetha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || (c == ' '));
}

int	ft_is_numberic(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	minus_count;

	i = 0;
	res = 0;
	minus_count = 0;
	while (ft_isspace(str[i]))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (ft_is_numberic(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (minus_count % 2 == 1)
		return (res * -1);
	return (res);
}

/* 
#include <stdio.h>

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
	return (0);
}
 */