/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkremer <dkremer@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:59:34 by dkremer           #+#    #+#             */
/*   Updated: 2023/06/27 20:11:37 by dkremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main() {
    // Test case
    char str1[20] = "Hello, ";
    char str2[] = "world!";

    ft_strncat(str1, str2, 6);
    printf("Concatenated string: %s\n", str1);

    return 0;
}*/
