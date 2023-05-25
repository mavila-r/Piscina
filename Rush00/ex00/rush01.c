/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:52:44 by anrivas-          #+#    #+#             */
/*   Updated: 2023/02/05 16:19:52 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	f;
	int	c;

f = 1;
	while (f <= y)
	{
c = 1;
		while (c <= x)
		{
			if ((c == 1 && f == 1) || (c == x && f == y && x > 1 && y > 1))
				ft_putchar('/');
			else if ((c == 1 && f == y) || (c == x && f == 1))
				write(1, "\\", 1);
			else if ((c != x && f == 1) || (c == 1 && f != y))
				write(1, "*", 1);
			else if ((c != x && f == y) || (c == x && f != y))
				write(1, "*", 1);
			else if ((c != 1 && f != y) && (c != x && f != 1))
				ft_putchar(' ');
c++;
		}
		if (f < y && (x > 0 && y > 0))
			write(1, "\n", 1);
f++;
	}
}
