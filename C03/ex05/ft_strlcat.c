/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:03:04 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/16 18:37:54 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n1;
	unsigned int	n2;
	unsigned int	res;

	n1 = 0;
	n2 = 0;
	res = 0;
	while (dest[n1] != '\0')
	n1++;
	while (src[res] != '\0')
	res++;
	if (size < n1)
		res = res + size;
	else
		res = res + n1;
	while (src[n2] != '\0' && (n1 + 1) < size)
	{
	dest[n1] = src[n2];
	n1++;
	n2++;
	}
	dest[n1] = '\0';
	return (res);
}

/*int	main(void)
{
	char	src[] = "Este es el";
	char	dest[] = "maldito textito";
	int size;

	size = 22;
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
}
*/