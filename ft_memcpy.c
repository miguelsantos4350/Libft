/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <msantos@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:19:12 by msantos           #+#    #+#             */
/*   Updated: 2024/11/01 15:45:59 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[24] = "HELLO";
	char	src[24] = "WORLD";
	size_t	n = 2;

	printf("%s\n",(dest));
	printf("%s\n",(src));
	ft_memcpy(dest, src, n);
	printf("%s\n",(dest));
}*/
