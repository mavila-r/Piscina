/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:51:13 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/12 14:54:21 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] >= 65 && str[num] <= 90)
		{
			str[num] = str[num] + 32;
		}
		num++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "HOLI";
	
	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}
*/