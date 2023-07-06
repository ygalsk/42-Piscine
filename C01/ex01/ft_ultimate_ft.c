/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkremer <dkremer@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:09:32 by dkremer           #+#    #+#             */
/*   Updated: 2023/06/19 01:58:13 by dkremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	s;
    int a;

    a = 0;
	s = '\0';
    while(str[s] != a)
    {
			write(1, &str[a], 1);
			a--;
    }
}

int main() {
    char str[] = "Hello, World!";

    ft_putstr(str);

    return 0;
}