/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:13:09 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/15 12:56:22 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	num;

	num = 0;
	if ((num == 0) && (str[0] >= 97 && str[0] <= 122))
	{
			str[0] = str[0] - 32;
	}
	while (str[num] != '\0')
	{
		if ((str[num] == 32) || (str[num] < 48)
			|| (str[num] >= 123) || (str[num] >= 58 && str[num] < 65)
			|| (str[num] > 90 && str[num] < 97))
		{
			if (str[num +1] >= 97 && str[num +1] <= 122)
			{
				str[num +1] = str[num +1] - 32;
			}	
		}
		else if (str[num +1] >= 65 && str[num +1] <= 90)
		{
				str[num +1] = str[num +1] + 32;
		}
		num++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "sOY ? -un?d	{or,itOO 57+3975LhkLjdks";
	
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/