/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:06:32 by msantos           #+#    #+#             */
/*   Updated: 2024/10/28 13:06:44 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buffer, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(buffer + i)) = 0;
		i++;
	}
}
/*

int   main(void)
{
    char str[50] = "sam the kid o bravo";

    bzero(str, 10);
    printf("Original: Before: %d After: %s \n", 2, str);
    ft_bzero(str, 10);
    printf("Minha: Before: %d After: %s \n", 2, str);
    return (0);
}*/
