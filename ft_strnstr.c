/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:11:51 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/29 13:01:39 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bottle, const char *glass, size_t len)
{
	size_t	count;

	if (!*glass)
	{
		return ((char *)bottle);
	}
	while (*bottle && len--)
	{
		count = 0;
		while (bottle[count] == glass[count])
		{
			if (!glass[++count])
				return ((char *)bottle);
			if (count > len)
				return (0);
		}
		bottle++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	const char	bottle[50] = "wine";
	const char	glass[20] = "n";
	char		*result;

	result = ft_strnstr(bottle, glass, 1);
	printf("The substring is: %s\n", result);
}*/
