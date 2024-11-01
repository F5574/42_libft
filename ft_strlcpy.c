/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:45:02 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/11/01 21:14:32 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, unsigned int s)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (s > 0)
	{
		i = -1;
		while (++i < s - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
		}
		dst[i] = '\0';
	}
	return (length);
}
