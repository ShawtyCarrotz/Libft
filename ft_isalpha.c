/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:22:02 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/04/29 16:02:50 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	i;
	char	j;

	i = 4;
	j = 'A';
	printf("%d\n", ft_isalpha(i));
	printf("%d", ft_isalpha(j));
	return (0);
}*/
