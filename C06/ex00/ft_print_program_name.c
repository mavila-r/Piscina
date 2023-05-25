/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:44:49 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/21 10:23:27 by mavila-r         ###   ########.fr       */
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
	char	*str;

	(void) argc;
	str = argv[0];
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
