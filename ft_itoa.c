/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipais-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:04:07 by ipais-mo          #+#    #+#             */
/*   Updated: 2024/06/03 21:03:24 by ipais-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nrints(int nbr)
{
	int	nrints;

	nrints = 1;
	if (nbr < 0)
		nrints = 2;
	while (nbr / 10 != 0)
	{
		nbr = (nbr / 10);
		nrints++;
	}
	return (nrints);
}

char	*rev_array(char *array, int arraylen)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	if (array[i] == '-')
		i++;
	j = arraylen - 1;
	while (array[i] && i < j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}
	return (array);
}

char	*min_int(char *array)
{
	array[0] = '-';
	array[1] = '2';
	array[2] = '1';
	array[3] = '4';
	array[4] = '7';
	array[5] = '4';
	array[6] = '8';
	array[7] = '3';
	array[8] = '6';
	array[9] = '4';
	array[10] = '8';
	array[11] = '\0';
	return (array);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		arraylen;
	int		i;

	i = 0;
	arraylen = ft_nrints(n);
	array = malloc(sizeof(char) * arraylen + 1);
	if (array == NULL)
		return (NULL);
	if (n == -2147483648)
		return (min_int(array));
	if (n < 0)
	{
		array[0] = '-';
		n = -n;
		i++;
	}
	while (i < arraylen)
	{
		array[i++] = n % 10 + '0';
		n = n / 10;
	}
	array[i] = '\0';
	return (rev_array(array, arraylen));
}
