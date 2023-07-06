/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreimann <jreimann@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:22:27 by jreimann          #+#    #+#             */
/*   Updated: 2023/06/24 15:23:51 by jreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


void	putint(int	c)
{
	write(1, &c, 1);
}


void	array_ptr()
{
	int *array_ptr;

	array_ptr = malloc(4 * sizeof(int));

}

//Groesse festlegen, die "reseviert" werden soll, hier: Speicherplatz = 4 Int


void 	check_row
{

	if xyz == True
	{
		putint(row);
	}
	else

write(1, \n, 1);	
}


int	main()
{
	int	array[] = {1, 2, 3, 4}

	int	x;
	int	*ptr;

	ptr = array;
	*(ptr + 2) = 0;
// Zahl an bestimmten Index veraendern direkt
	x = 0;

	while	(x < 4)
	{
		putint(array[x];
		x++;
	}
	return (0);
}
