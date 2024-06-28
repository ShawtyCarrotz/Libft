/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:03:03 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/03 18:12:26 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*strarray(char const *s, char c, int j)
{
	char	*array;
	int		i;
	int		k;

	i = 0;
	k = j;
	while (s[j] && s[j] != c)
	{
		i++;
		j++;
	}
	array = ft_calloc(sizeof(char), (i + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (s[k] && s[k] != c)
		array[i++] = s[k++];
	return (array);
}

char	**ft_free(int nrwords, char **strs)
{
	int	i;

	i = 0;
	while (i < nrwords)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	auto char **strs;
	auto int nrwords, i, j;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	nrwords = count_words(s, c);
	strs = ft_calloc(sizeof(char *), (nrwords + 1));
	if (strs == NULL)
		return (NULL);
	while (i < nrwords)
	{
		while (s[j])
		{
			if ((j == 0 && s[j] != c) || (s[j] != c && (s[j - 1] == c)))
			{
				strs[i] = strarray(s, c, j);
				if (!strs[i])
					return (ft_free(i, strs));
				i++;
			}
			j++;
		}
	}
	return (strs);
}
