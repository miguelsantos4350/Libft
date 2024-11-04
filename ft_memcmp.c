/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:44:42 by msantos           #+#    #+#             */
/*   Updated: 2024/10/28 14:45:13 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str1[] = "samuelkid";
	char	str2[] = "samuelKid";
	size_t	n = 2;

	printf("%d\n", ft_memcmp(str1, str2, n));
	printf("%d\n", memcmp(str1, str2, n));
}*/
