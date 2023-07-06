/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkremer <dkremer@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:09:28 by dkremer           #+#    #+#             */
/*   Updated: 2023/06/27 20:14:25 by dkremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' )
	{
		i++;
	}	
	while (src[j] != '\0' )
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    ft_strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
*/
