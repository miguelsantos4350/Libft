/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:46:01 by msantos           #+#    #+#             */
/*   Updated: 2024/10/29 13:46:11 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	j;
	const char		*buffer;

	j = c;
	i = ft_strlen(str);
	buffer = (str + i);
	while (i >= 0)
	{
		if (*buffer == j)
			return ((char *)buffer);
		buffer--;
		i--;
	}
	if (j == '\0')
		return ((char *)buffer);
	return (0);
}

/*int	main(void)
{
	char str[] = "samuel,joao,miguel,diogo";
	int	c = ',';

	printf("%s\n", ft_strrchr(str, c));
}*/
