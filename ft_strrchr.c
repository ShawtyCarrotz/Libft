/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:28:34 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/01 17:13:52 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int     main(void)
{
        char    *s;

        s = "coco";
        printf("%s\n", ft_strrchr(s, '\0'));
        s = "adidas";
        printf("%s\n", ft_strrchr(s, 'o'));
        s = "";
        printf("%s\n", ft_strrchr(s, 'i'));
        return (0);
}*/
