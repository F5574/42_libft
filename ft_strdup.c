/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvon-ah- <gvon-ah-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:37:32 by gvon-ah-          #+#    #+#             */
/*   Updated: 2024/10/30 20:01:26 by gvon-ah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	size_t	i;
	char	*dst;


	l = ft_strlen(s1);
	i = 0;
	dst = malloc(sizeof(char) * (l + 1));
	if (!dst)
		return (NULL);
	while (i < l)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[l] = '\0';
	return (dst);
}

int	main(void)
{
	const char	*tst = "oiuybyff";
	char		*res = ft_strdup(tst);

	printf("Test %s\n", res);
}
