/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <msantos@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:58:35 by msantos           #+#    #+#             */
/*   Updated: 2024/11/01 14:55:00 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(long num)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		counter++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		lenstr;
	long	num;
	char	*str;

	num = n;
	lenstr = ft_lennum(num);
	str = malloc(sizeof(char) * (lenstr + 1));
	if (!str)
		return (NULL);
	*(str + lenstr--) = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	else if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	while (num > 0)
	{
		str [lenstr--] = ('0' + (num % 10));
		num /= 10;
	}
	return (str);
}
/*
int	main()
{
	printf("%s", ft_itoa(0));
}
*/
