/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:31:08 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/02 17:00:48 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	if (!s1 || !set || s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)s1[i]))
		i++;
	while (ft_strrchr(set, (int)s1[j]))
		j--;
	return (ft_substr(s1, i, j + 1 - i));
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("ababaolmundoab","ab"));
	printf("%s\n", ft_strtrim("ababaolmundoab","abaa"));
	printf("%s\n", ft_strtrim("ababaolmundoabbbab","ab"));
	return (0);
}*/
