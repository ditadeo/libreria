/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:34:44 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/27 18:08:25 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			p;
	unsigned int	count;

	p = 0;
	count = ft_strlen(src);
	if (!dstsize)
		return (count);
	while (src[p] != '\0' && p < dstsize - 1)
	{
		dst[p] = src[p];
		p++;
	}
	dst[p] = '\0';
	return (count);
}
/*
#include <stdio.h>
int	main()
{
	char		dst[10] = "Diana";
	const char	src[10] = "Tadeo";

	printf("Before strlcpy dst = %s, src = %s\n", dst, src);

	ft_strlcpy(dst, src, 3);

	printf("After strlcpy dst = %s, src = %s\n", dst, src);
	return (0);
}*/
