/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:57:08 by msantos           #+#    #+#             */
/*   Updated: 2024/10/29 13:57:16 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	size;
	char	*copy;

	size = (ft_strlen(str) + 1);
	copy = (char *)malloc(sizeof(char) * size);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
/*int	main(void)
{
	char	src[] = "samuelthekid";
	char	src1[] = "samuel";

	printf("Mi: %s\n", ft_strdup(src));
	printf("Ori: %s\n", strdup(src1));
}*/
