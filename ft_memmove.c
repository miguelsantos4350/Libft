/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <msantos@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:42:07 by msantos           #+#    #+#             */
/*   Updated: 2024/11/01 15:53:02 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n--)
		{
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
		}
	}
	else
	{
		while (n--)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
      char dest[] = "teste1";
      char dest1[] = "teste2";
      char src[] = "copiado1";
      char src1[] = "copiado2";

      ft_memmove(dest, src, 3);
      printf("Fake:%s\n",(dest));
      memmove(dest1, src1, 3);
      printf("Original:%s\n",(dest1));  
}
*/