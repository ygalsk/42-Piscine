/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberariu <cberariu@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:22:52 by cberariu          #+#    #+#             */
/*   Updated: 2023/06/18 12:37:12 by cberariu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_line(char start, char middle, char end, int count)
{
	int	i;

	i = 0;
	ft_putchar(start);
	while (i < count)
	{
		ft_putchar(middle);
		i++;
	}
	if (count > 0)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x < 1 || y < 1)
	{
		return ;
	}
	ft_print_line('A', 'B', 'C', x - 2);
	while (i < y - 2)
	{
		ft_print_line('B', ' ', 'B', x - 2);
		i++;
	}
	if (y >= 2)
	{
		ft_print_line('C', 'B', 'A', x - 2);
	}
}

/* when life gives u a code with more than 25 line :') 
 * and you ahve to redo alll again, RIP old code

 void	ft_roof(int i, int x)
{
	if (i == 1)
	{
		while (i <= x)
		{
			if (i == 1)
			{
				ft_putchar ('A');
			}
			else if (i == x)
			{
				ft_putchar ('C');
			}
			else
			{
				ft_putchar ('B');
			}
			i++;
		}
		ft_putchar('\n');
	}
}

void	ft_body(int j, int k, int y, int x)
{
	while (j <= y -2)
	{
		ft_putchar ('B');
		while (k <= x -2)
		{
			ft_putchar(' ');
			k++;
		}
		k = 1;
		ft_putchar ('B');
		ft_putchar ('\n');
		j++;
	}
}

void	ft_base(int j, int b, int y, int x)
{
	if (j == y -1)
	{
		while (b <= x)
		{
			if (b == 1)
			{
				ft_putchar('C');
			}
			else if (b == x)
			{
				ft_putchar ('A');
			}
			else
			{
				ft_putchar ('B');
			}
			b++;
		}
		ft_putchar ('\n');
	}
}*/
/* void	ft_roof(int i, int x)
{
	if (i == 1)
	{
		while (i <= x)
		{
			if (i == 1)
			{
				ft_putchar ('A');
			}
			else if (i == x)
			{
				ft_putchar ('C');
			}
			else
			{
				ft_putchar ('B');
			}
			i++;
		}
		ft_putchar('\n');
	}
}

void	ft_body(int j, int k, int y, int x)
{
	while (j <= y -2)
	{
		ft_putchar ('B');
		while (k <= x -2)
		{
			ft_putchar(' ');
			k++;
		}
		k = 1;
		ft_putchar ('B');
		ft_putchar ('\n');
		j++;
	}
}

void	ft_base(int j, int b, int y, int x)
{
	if (j == y -1)
	{
		while (b <= x)
		{
			if (b == 1)
			{
				ft_putchar('C');
			}
			else if (b == x)
			{
				ft_putchar ('A');
			}
			else
			{
				ft_putchar ('B');
			}
			b++;
		}
		ft_putchar ('\n');
	}
}*/
