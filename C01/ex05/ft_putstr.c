/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkremer <dkremer@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:51:08 by dkremer           #+#    #+#             */
/*   Updated: 2023/06/29 04:39:32 by dkremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	s;

	s = 0;
	if (str != NULL)
	{
		while (str[s] != '\0')
		{
			write(1, &str[s], 1);
			s++;
		}
	}
}
void ft_putstr(char *str);

int main() {
    char str[] = "Hello, World!";

    ft_putstr(str);
    ft_putchar('\n');

    return 0;
}
