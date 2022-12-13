/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:59:42 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/13 15:11:24 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*st;

	count = 0;
	st = s;
	while (count < n)
	{
		st[count] = 0;
		++count;
	}
}
/*
#include <stdio.h>
int	main()
{
	char s [20];
	strcpy(s, "piscina");
	puts(s);

	ft_bzero(s, 2);
	puts(s);
}
*/
