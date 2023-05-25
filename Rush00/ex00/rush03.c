/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:54:40 by anrivas-          #+#    #+#             */
/*   Updated: 2023/02/05 16:19:48 by anrivas-         ###   ########.fr       */
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
			if ((c == 1 && f == 1) || (c == 1 && f == y))
				ft_putchar('A');
			else if ((c == x && f == 1) || (c == x && f == y))
				ft_putchar('C');
			else if ((c != x && f == 1) || (c == 1 && f != y))
				ft_putchar('B');
			else if ((c != x && f == y) || (c == x && f != y))
				ft_putchar('B');
			else if ((c != 1 && f != y) && (c != x && f != 1))
				ft_putchar(' ');
c++;
		}
		if (f < y && (x > 0 && y > 0))
			write(1, "\n", 1);
f++;
	}
}
