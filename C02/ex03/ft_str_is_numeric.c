/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:57:51 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/15 17:43:39 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] < '0' || str[num] > '9')
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/*int	main(void)
{
	int	y;

	y = ft_str_is_numeric("");
	printf("%d", y);
	return (0);
}
*/