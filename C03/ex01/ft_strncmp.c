/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkremer <dkremer@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 02:16:49 by dkremer           #+#    #+#             */
/*   Updated: 2023/07/05 08:48:56 by dkremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (i == n)
			return (0);
		i++;
	}
	return ((s1[i] > s2[i]) - (s1[i] < s2[i]));
}*/

#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    int result1 = ft_strncmp(str1, str2, 5);
    int result2 = ft_strncmp(str1, str3, 5);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);

    return 0;
}
