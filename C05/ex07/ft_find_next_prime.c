/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:47:29 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/21 10:10:04 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n < nb / n)
	{
		if (nb % n == 0)
			return (0);
	n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	while (ft_is_prime(i) == 0)
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	int	nb;

	nb = 19;
	printf("El siguiente primo es %d\n", ft_find_next_prime(nb));
	return (0);
}
 */