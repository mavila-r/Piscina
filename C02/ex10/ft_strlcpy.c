/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:53:26 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/12 18:38:35 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	num;
	unsigned int	res;

	num = 0;
	res = 0;
	while (src[res] != '\0')
	{
		res++;
	}
	if (size < 1)
	{
		return (res);
	}
	while (src[num] != '\0' && num < size -1)
	{
		dest[num] = src[num];
		num++;
	}
	dest[num] = '\0';
	return (res);
}

/*int	main(void)
{
	char	dest[50];
	char	*src;
	int	size;

	src = "Aquí va el puto texto";
	size = 15;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
}
*/