/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_fake.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos <msantos@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:58:18 by msantos           #+#    #+#             */
/*   Updated: 2024/11/04 14:45:12 by msantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	count;
	int	flag;
	int	i;

	count = 0;
	flag = 0;
	i = 0;
	while (str[i]) 
	{
		if (str[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (str[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc((end - start + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static char	**split_words(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			result[j] = fill_word(s, start, i);
			if (!(result[j]))
				return (ft_free(result, j));
			start = -1;
			j++;
		}
		i++;
	}
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	if (!s || !c)
		return (NULL);
	result = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	result = split_words(result, s, c);
	return (result);
}

int	main(void)
{
    char *ptr = "Miguel Goncalves dos Santos";
    char c = ' ';
    char **array = ft_split(ptr,c);

    for (int i = 0; array[i]; i++)
    {
        printf("%s\n", array[i]);
    }
    return (0);
}