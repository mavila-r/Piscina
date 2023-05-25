/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:10:27 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/09 18:20:37 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptra;
	int	*ptrb;

	a = 28;
	b = 5;
	ptra = &div;
	ptrb = &mod;
	ft_div_mod(a, b, ptra, ptrb);
	printf("Resultado:%d", div);
	printf("Resto:%d", mod);
	return (0);
}
*/