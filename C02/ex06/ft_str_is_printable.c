/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:30:26 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/15 14:29:02 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if ((str[num] >= 0 && str[num] <= 31) || str[num] == 127)
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

	y = ft_str_is_printable("");
	printf("%d", y);
	return (0);
}
*/