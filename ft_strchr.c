/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:40:45 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/28 15:50:37 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char) c)
	{
		return ((char *)s);
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	const char s[] = "hi there";
	const char c = 't';
	char	*ret;

	ret = strchr(s, c);

	printf("The string after |%c| is - |%s|\n", c, ret);
	return (0);
}*/
