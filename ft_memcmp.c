/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:14:49 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/05/04 19:31:51 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*temporary_s1;
	unsigned char	*temporary_s2;

	temporary_s1 = (unsigned char *)s1;
	temporary_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (temporary_s1[i] != temporary_s2[i])
			return (temporary_s1[i] - temporary_s2[i]);
		i++;
	}
	return (0);
}
