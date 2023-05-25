/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:48:37 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/12 14:54:08 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] >= 97 && str[num] <= 122)
		{
			str[num] = str[num] - 32;
		}
		num++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "hello";
	
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
*/