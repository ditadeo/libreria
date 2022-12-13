/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:19:42 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/13 14:51:38 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	count;
	char	*a;

	count = 0;
	a = str;
	while (count < len)
	{
		a[count] = c;
		count++;
	}
	return (str);
}
/*
#include <stdio.h>

int main () 
{
	char str[50];
	
	strcpy(str, "Diana");
	puts(str);
	
	ft_memset(str,'@', 2);
	puts(str);
   
	return(0);
}
*/
