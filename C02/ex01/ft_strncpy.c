/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:56:04 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/12 11:36:23 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (src[num] != '\0' && num < n)
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}

/*int	main(void)
{
	unsigned int	n;
	char	src[] = "textito";
	char	dest[] = "          ";

	n = 4;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return (0);
}*/
