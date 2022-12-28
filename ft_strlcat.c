/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:49:57 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/27 18:07:57 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sizedst)
{
	size_t	psrc;
	size_t	pdst;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	pdst = dstlen;
	psrc = 0;
	if (dstlen < sizedst - 1 && sizedst > 0)
	{
		while (src[psrc] && dstlen + psrc < sizedst -1)
		{
			dst[pdst] = src[psrc];
			pdst++;
			psrc++;
		}
		dst[pdst] = 0;
	}
	if (dstlen >= sizedst)
		dstlen = sizedst;
	return (dstlen + srclen);
}
/*
#include <stdio.h>
int	main()
{
	char dst[20] = "Diana";
	const char src[20] = "Tadeo";
	size_t	x;

	x = ft_strlcat(dst, src, 5);

	printf("%zu\n",x);
	printf("Before strlcat dst = %s, src = %s\n", dst, src);
	
	ft_strlcat(dst, src, 11);

	printf("After strlcat dst = %s, src = %s\n", dst, src);
	return (0);
}*/
