/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:28:35 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/05/04 16:05:17 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start_len;

	i = ft_strlen(dst);
	start_len = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= i)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (start_len + ft_strlen(src));
}
