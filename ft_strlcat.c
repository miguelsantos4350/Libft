/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:41:26 by msantos           #+#    #+#             */
/*   Updated: 2024/08/10 00:44:44 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	i;

	counter = ft_strlen(dst);
	i = 0;
	if (size <= counter)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] != '\0' && size > counter + 1)
	{
		dst[counter] = src[i];
		counter++;
		i++;
	}
	dst[counter] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*#include <bsd/string.h>
int	main(void)
{
	char	dst[8] = "samuel";
	const	char src[8] = "thekid";
	size_t	size = 6;
	
	printf("%s tamanho do source: %zu \n",src, ft_strlcat(dst, src, size));
	printf("Ori: %s tamanho do source: %zu\n",src, strlcat(dst, src, size));
}*/
