/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:15:27 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/20 19:47:17 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

n = 2;
	if (nb <= 1)
		return (0);
	while (n < nb / 2)
	{
		if (nb % n == 0)
			return (0);
	n++;
	}
	return (1);
}

/*int main(void)
{
	int	nb;

	nb = 18;
	printf("%d\n", ft_is_prime(nb));
	return (0);
}
*/