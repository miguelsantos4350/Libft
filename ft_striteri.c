/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:59:12 by msantos           #+#    #+#             */
/*   Updated: 2024/10/29 13:59:21 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}

/*void	print_char_with_index(unsigned int i, char *c)
{
	printf("Caractere na posição %u: %c\n", i, *c);
}

int	main(void)
{
	char str[] = "Samumumumu";

	ft_striteri(str, print_char_with_index);
	return (0);
}*/
