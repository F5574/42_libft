/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:26:42 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/11/02 17:03:29 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_d(int b)
{
	size_t	i;

	i = 0;
	while (b >= 0)
	{
		b /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	long	num;

	num = n;
	i = get_d(n);
	if (n < 0)
	{
		num *= -1;
		i++;
	}
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	*(res + i) = 0;
	while (i--)
	{
		*(res + i) = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		*(res + 0) = '-';
	return (res);
}
