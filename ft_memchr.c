/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:09:11 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/01 17:35:50 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temporary_string;
	unsigned char	temporary_c;
	size_t			i;

	temporary_c = (unsigned char)c;
	temporary_string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (temporary_string[i] == temporary_c)
			return ((void *)&temporary_string[i]);
		i++;
	}
	return (NULL);
}
