/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:20:42 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/05 16:59:41 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

x = 0;
	while (x <= 98)
	{
	y = x +1;
		while (y <= 99)
		{
			ft_putchar(x / 10 + '0');
			ft_putchar(x % 10 + '0');
			write(1, " ", 1);
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			if (x < 98)
				write(1, ", ", 2);
	y++;
		}
	x++;
	}
}
