/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:23:09 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/15 17:42:48 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] < 'a' || str[n] > 'z') && (str[n] < 'A' || str[n] > 'Z'))
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int	main(void)
{
	int	y;

	y = ft_str_is_alpha("");
	printf("%d", y);
	return (0);
}
*/