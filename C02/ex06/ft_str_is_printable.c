/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkremer <dkremer@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:54:59 by dkremer           #+#    #+#             */
/*   Updated: 2023/06/26 18:01:47 by dkremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

#include <stdio.h>

int ft_str_is_printable(char *str);

int main() {
    char str1[] = "Hello, World!";    // Contains printable characters
    char str2[] = "Hello\tWorld!";    // Contains non-printable character (tab)
    char str3[] = "";                 // Empty string

    // Testing str1
    int result1 = ft_str_is_printable(str1);
    printf("Result for str1: %d\n", result1);

    // Testing str2
    int result2 = ft_str_is_printable(str2);
    printf("Result for str2: %d\n", result2);

    // Testing str3
    int result3 = ft_str_is_printable(str3);
    printf("Result for str3: %d\n", result3);

    return 0;
}

