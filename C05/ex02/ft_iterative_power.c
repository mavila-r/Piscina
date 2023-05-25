/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:15:10 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/20 18:25:09 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		n = n * nb;
		power--;
	}
	return (n);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 9;
	power = 2;
	printf("Ptc de %d a %d es: %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}
*/