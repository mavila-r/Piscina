/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:41:36 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/16 18:36:37 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n1;
	unsigned int	n2;

n1 = 0;
n2 = 0;
	while (dest[n1] != '\0')
	{
	n1++;
	}
	while (src[n2] != '\0' && n2 < nb)
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
	unsigned int	nb;

	nb = 7;
	printf("%s\n", ft_strncat(dest, src, nb));
}
*/