/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <msantos@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:51:28 by msantos           #+#    #+#             */
/*   Updated: 2024/11/01 15:54:20 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)buffer + i) = c;
		i++;
	}
	return (buffer);
}
/*
int   main(void)
{
      char  str[23] = "samthekid";
      int   c = 'A';
      size_t n = 6;

      printf("%s\n",(str));
      ft_memset(str, c, n);
      printf("%s\n",(str));
      return (0);
}
*/