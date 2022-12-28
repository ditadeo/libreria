/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:42:42 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/28 16:05:55 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	while (count >= 0)
	{
		if (s[count] == (char)c)
		{
			return ((char *)(s + count));
		}
		count--;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	const char s[] = "Cheers uys!";
	const char c = 'g';
	char	*ret;

	ret = ft_strrchr(s, c);

	printf("The string after |%c| is - |%s|\n", c, ret);

	return (0);
}*/
