/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <msantos@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:41:38 by msantos           #+#    #+#             */
/*   Updated: 2024/11/01 15:16:26 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == ((unsigned char)c))
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "o jardim da minha mae e muito lindo";
	int	c = 'e';
	size_t n = 30;
	unsigned char	*test;

	test = ft_memchr(str, c, n);
	printf("%s\n", test);
}*/