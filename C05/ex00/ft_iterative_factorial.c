/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:16:33 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/20 18:08:17 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}

/*int main(void)
{
	int nb;
	nb = 12;
	printf("factorial de %d is: %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}
*/