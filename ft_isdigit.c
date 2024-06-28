/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:59:29 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/04/30 14:54:43 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int     main(void)
{
        int    i;
        int    j;

        i = 4;
        j = 'A';
        printf("%d\n", ft_isdigit(i));
        printf("%d", ft_isdigit(j));
        return (0);
}*/
