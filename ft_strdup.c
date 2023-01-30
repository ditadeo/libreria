/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:43:33 by ditadeo-          #+#    #+#             */
/*   Updated: 2023/01/30 14:50:48 by ditadeo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*pointer;

	len = ft_strlen(s1);
	pointer = malloc(len + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}
	ft_memcpy (pointer, s1, len + 1);
	return (pointer);
}
/*
#include <stdio.h>
int main(void)
{
	const char *string = "Hello, World!";
	char *pointer;
	
	pointer = ft_strdup(string);
	printf("Original string: %s\n", string);
	printf("Copied string: %s\n", pointer);
	return (0);
}*/
