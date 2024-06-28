/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:03:49 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/05/18 16:17:05 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	count;
	int	res;

	i = 0;
	count = 0;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			count++;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	if (count == 1)
		res = -res;
	return (res);
}
/*
#include <stdio.h> 

int	main(void)
{
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("  -2"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("  +30"));
	return (0);
}*/
