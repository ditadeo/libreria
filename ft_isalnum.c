/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:54 by ditadeo-          #+#    #+#             */
/*   Updated: 2022/11/30 15:13:05 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int a)
{
	if (ft_isalpha (a) || ft_isdigit (a))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    printf("%d", ft_isalnum('!'));
}
*/
