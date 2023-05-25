/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:21:08 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/12 12:23:36 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] < 'A' || str[num] > 'Z')
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

	y = ft_str_is_uppercase("43243");
	printf("%d", y);
	return (0);
}
*/