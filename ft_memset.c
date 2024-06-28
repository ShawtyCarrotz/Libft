/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:45:31 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/05/01 15:05:04 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*temporary;
	int				i;

	i = 0;
	temporary = (unsigned char *)b;
	while (n > 0)
	{
		temporary[i++] = c;
		n--;
	}
	return (b);
}
