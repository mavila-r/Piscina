/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:58:18 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/09 18:21:55 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < (size / 2))
	{
	c = tab[i];
	tab[i] = tab [size -1 - i];
	tab[size -1 - i] = c;
	i++;
	}
}

/*int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6};
	int	size = 7;

	ft_rev_int_tab(tab, size);
	return (0);
}*/
