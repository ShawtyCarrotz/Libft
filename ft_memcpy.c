/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:09:00 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/05/03 12:56:56 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*temporary_dest;
	unsigned char	*temporary_src;

	i = 0;
	temporary_dest = (unsigned char *) dest;
	temporary_src = (unsigned char *) src;
	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	while (n > 0)
	{
		temporary_dest[i] = temporary_src[i];
		i++;
		n--;
	}
	return (dest);
}
