/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:02:47 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/10/30 20:04:07 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	a;
	int	count;
	int	res;

	a = 0;
	res = 0;
	count = 1;
	while (str[a] == ' ' || str[a] >= 9 && str[a] <= 12)
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			count = count * -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		res = res * 10 + (str[a] - '0');
		a++;
	}
	return (count * res);
}
