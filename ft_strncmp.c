/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:07:30 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/28 16:49:11 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] && s1[count] == s2[count] && n - 1 > count)
	{
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_strncmp("Hi", "Guys", 1));
}*/
