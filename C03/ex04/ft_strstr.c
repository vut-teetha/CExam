int	ft_strcmp(char *str, char *to_find, int pos)
{	
	int i;

	i = 0;
	while ((str[pos] != '\0') && (to_find[i] != '\0') && (str[pos] == to_find[i]))
	{
		i++;
		pos++;
	}
		
	return (to_find[i] == '\0' ? 1 : 0);
}
char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (to_find[0] == '\0')
		return str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(str, to_find, i))
				return &str[i];
		}
		i++;
	}
	return (void *)0;
}
// #include <stdio.h>


// int	main(void)
// {
// 	printf("%s\n", ft_strstr("Hello AB!", "AB"));         // AB!
// 	printf("%s\n", ft_strstr("42Bangkok", "Bang"));       // Bangkok
// 	printf("%s\n", ft_strstr("abcdef", "cd"));            // cdef
// 	printf("%s\n", ft_strstr("abcdef", "cd"));            // cdef
// 	printf("%s\n", ft_strstr("abcdef", "\0"));            //
// 	return (0);
// } 
