/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:57:45 by msantos           #+#    #+#             */
/*   Updated: 2024/10/29 12:58:00 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*buffer;
	int		tam;

	tam = (nmemb * size);
	buffer = malloc(sizeof(char) * tam);
	if (!buffer)
		return (NULL);
	while (--tam >= 0)
		buffer[tam] = 0;
	return ((void *)buffer);
}
/*
int	main(void)
{
	size_t	n = 10;
	size_t	i = 0;
	char	*a = ft_calloc(n, 0);
	char	*b = calloc(n, 0);
	printf("buffer A\n");
	while (i < n)
	{
		printf("local : %p valor : %d\n", &a[i], a[i]);
		i++;
	}
	free(a);
	i = 0;
	printf("buffer B\n");
	while (i < n)
	{
		printf("local : %p valor : %d\n", &b[i], b[i]);
		i++;
	}
	free(b);
	return (0);
}*/
