/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkremer <dkremer@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:15:05 by dkremer           #+#    #+#             */
/*   Updated: 2023/06/29 11:00:56 by dkremer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	recursion(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
	nb = -nb;
	}
	if (nb >= 10)
	{
		recursion(nb / 10);
	}
	ft_putchar('0' + nb % 10);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0' );
	}
	else
	{
		recursion(nb);
	}
}

int main() {
    int num1 = 123;
    int num2 = -456;
    int num4 = -2147483648;

    ft_putnbr(num1);
    ft_putchar('\n');

    ft_putnbr(num2);
    ft_putchar('\n');

    ft_putnbr(42);
    ft_putchar('\n');

    ft_putnbr(num4);
    ft_putchar('\n');

    return 0;
}
