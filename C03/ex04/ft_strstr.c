/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:24:51 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/17 12:38:45 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	n1;
	int	n2;

	n1 = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[n1] != '\0')
	{
		n2 = 0;
		while ((str[n1 + n2] == to_find[n2]) && (str[n1 + n2] != '\0'))
		{
			n2++;
		}
		if (to_find[n2] == '\0')
		{
			return (&str[n1]);
		}
		n1++;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "Socorro diosito";
	char to_find[] = "io";
	printf("%s\n", ft_strstr(str, to_find));
	return(0);
}
*/