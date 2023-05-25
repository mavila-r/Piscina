/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:45:05 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/09 18:21:45 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	num;
	int	swap;

num = 0;
	while (num < (size -1))
	{
		if (tab[num] > tab[num +1])
		{
		swap = tab[num];
		tab[num] = tab[num +1];
		tab[num +1] = swap;
		num = 0;
		}
		else
	num++;
	}
}

/*int	main(void)
{
	int	tab[] = {3, 2, 5, 6, 0, 1, 5, 8, 4};
	int	size = 9;

	ft_sort_int_tab(tab, size);
	return (0);
}
*/