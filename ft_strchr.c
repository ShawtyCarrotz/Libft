/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:00:15 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/01 17:22:57 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	*s;

	s = "coco";
	printf("%s\n", ft_strchr(s, '\0'));
	s = "adidas";
	printf("%s\n", ft_strchr(s, 'o'));
	s = 0;
	printf("%s\n", ft_strchr(s, 'i'));
	return (0);
}*/
