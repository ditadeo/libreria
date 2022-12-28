/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:17:40 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/12/28 14:38:12 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 'a');
	}
	return (c);
}
/*
#include <stdio.h>
int main()
{
    char    c;

    c = 'D';
    printf("%c\n", ft_tolower(c));
    return (0);
}*/
