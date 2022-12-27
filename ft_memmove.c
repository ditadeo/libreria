/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:23:19 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/27 15:08:58 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	count;

	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	if (dst > src)
	{
		count = ((int)len -1);
		while (count >= 0)
		{
			((char *)dst)[count] = ((char *)src)[count];
			count--;
		}
	}
	else
	{
		count = 0;
		while (count < (int)len)
		{
			((char *)dst)[count] = ((char *)src)[count];
			count++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int	main () 
{
   char dest[] = "Hi guys!";
   const char src[]  = "Cheers!";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
