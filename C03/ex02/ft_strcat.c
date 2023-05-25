/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:07:06 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/16 18:36:03 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	n1;
	int	n2;

n1 = 0;
n2 = 0;
	while (dest[n1] != '\0')
	{
	n1++;
	}
	while (src[n2] != '\0')
	{
	dest[n1] = src[n2];
	n1++;
	n2++;
	}
dest[n1] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[30] = "El textito";
	char	src[] = "El segundo texto";

	printf("%s\n", ft_strcat(dest, src));
}
*/