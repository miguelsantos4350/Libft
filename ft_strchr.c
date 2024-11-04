/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:32:58 by msantos           #+#    #+#             */
/*   Updated: 2024/10/28 14:33:15 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	j;

	j = c;
	while (*str)
	{
		if (*str == j)
			return ((char *)str);
		str++;
	}
	if (!j)
		return ((char *)str);
	return (NULL);
}
/*int	main(void)
{
	const char	str[] = "shamuel";
	int	c = 'd';

	printf("%s\n", ft_strchr(str, c));
}*/
