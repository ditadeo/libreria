/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:01:52 by ditadeo-          #+#    #+#             */
/*   Updated: 2023/01/27 15:03:59 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	loc;
	int	sign;
	int	number;

	loc = 0;
	sign = 1;
	number = 0;
	while (((str[loc] >= '\t' && str[loc] <= '\r') || str[loc] == 32))
		loc++;
	if (str[loc] == '-' || str[loc] == '+')
	{
		if (str[loc] == '-')
			sign = sign * -1;
		loc++;
	}
	while (str[loc] >= 48 && str[loc] <= 57)
	{
		number = (str[loc] - '0') + (number * 10);
		loc++;
	}
	return (number * sign);
}
/*
#include <stdio.h>
int main(void)
{
	char *str;
	str = "-+6789";
	ft_atoi(str);
	printf("%d", ft_atoi(str));
	return (0);
}*/
