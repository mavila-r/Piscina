/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:20:49 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/05 16:50:21 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
	n = 'P';
		write(1, &n, 1);
	}
	else
	{
	n = 'N';
		write(1, &n, 1);
	}
}