/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:30:13 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/20 18:49:25 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 2)
		return (1);
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

/*int	main(void)
{
	int	index;
	int	num;

	index = 15;
	printf("%d\n", ft_fibonacci(index));
}
*/