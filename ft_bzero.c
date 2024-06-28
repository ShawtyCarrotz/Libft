/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:39:58 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/03 20:04:57 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temporary;
	int				i;

	temporary = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		temporary[i++] = '\0';
		n--;
	}
}
