/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuteetha <vuteetha@student.42Bangkok.th    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:40:17 by vuteetha          #+#    #+#             */
/*   Updated: 2025/07/19 17:40:17 by vuteetha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_dest);
	i = 0;
	while (src[i] && ((i + len_dest + 1) < size))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if ((i + len_dest) < size)
		dest[len_dest + len_src] = '\0';
	return (len_dest + len_src);
}



/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char buffer[15] = "Hello, ";
	strlcat(buffer, "Born to dev", 20);
	printf("%s\n", buffer);  // Output: Hello, World!
	return (0);
}
*/