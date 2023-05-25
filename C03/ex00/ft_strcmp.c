/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:18:21 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/16 18:35:41 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0' && s2[n] != '\0' && s1[n] == s2[n])
	{
		n++;
	}
	return (s1[n] - s2[n]);
}

/*int	main(void)
{
	char	s1[] = "holi";
	char	s2[] = "guacamoli";

	ft_strcmp(s1, s2);
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
*/