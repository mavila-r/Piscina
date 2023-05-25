/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:52:58 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/20 12:27:54 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		ft_putchar(str[num]);
		num++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;

	n = 1;
	while (argc > n)
	{
		ft_putstr(argv[n]);
		write(1, "\n", 1);
	n++;
	}
	return (0);
}
