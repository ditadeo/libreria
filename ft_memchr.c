/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:23:32 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/29 11:22:19 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	str = (unsigned char *)s;
	c = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (str[count] == c)
			return ((void *)str + count);
		count++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "Don't panic!";
   const char ch = ' ';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("The string after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
