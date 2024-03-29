/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:20:14 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/15 15:49:01 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t		count;
	char		*dest;
	const char	*source;

	count = 0;
	dest = dst;
	source = src;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (count < len)
	{
		dest[count] = source[count];
		count++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	const char	src[50] = "Hello guys!";
	char	dest[50];

	strcpy(dest,"Helloooooooooooooo");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	return(0);
}
*/
