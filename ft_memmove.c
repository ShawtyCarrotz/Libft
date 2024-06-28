/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:09:54 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/03 22:20:42 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temporary_dest;
	unsigned char	*temporary_src;

	temporary_dest = (unsigned char *) dest;
	temporary_src = (unsigned char *) src;
	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	if (temporary_dest > temporary_src)
	{
		while (n--)
			temporary_dest[n] = temporary_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
