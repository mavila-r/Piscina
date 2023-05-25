/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:10:08 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/12 12:22:17 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] < 'a' || str[num] > 'z')
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

	y = ft_str_is_lowercase("hello");
	printf("%d", y);
	return (0);
}
*/