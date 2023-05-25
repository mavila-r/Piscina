/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:04:27 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/17 10:59:28 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	nu;

	nu = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[nu] != '\0' && s2[nu] != '\0' && s1[nu] == s2[nu] && nu < (n - 1))
	{
		nu++;
	}
	return (s1[nu] - s2[nu]);
}

/*int	main(void)
{
	char	s1[] = "haoligffgd";
	char	s2[] = "paoli";
	unsigned int n;

	n = 3;
	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/