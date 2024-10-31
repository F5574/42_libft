/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:26:42 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/10/30 20:02:37 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_d(int b)
{
	size_t	i;

	i = 1;
	while (b /= 10)
		i++;
	return (i);
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
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
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
