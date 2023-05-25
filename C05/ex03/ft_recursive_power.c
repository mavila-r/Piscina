/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:25:29 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/20 18:29:08 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 9;
	power = 2;
	printf("Ptc de %d a %d es: %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}
*/