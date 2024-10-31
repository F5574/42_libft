/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:45:02 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/10/30 20:01:07 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (size > 0)
	{
		i = -1;
		while (++i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
	return (length);
}
