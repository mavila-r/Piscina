/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:46:07 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/20 18:01:58 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		write(1, &str[num], 1);
		num++;
	}
	write(1, "\n", 1);
}

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

int	main(int argc, char *argv[])
{
	char	*swap;
	int		i;
	int		j;

	j = argc;
	i = 1;
	while (argc >= ++i)
	{
		j = 1;
		while (argc - 1 >= ++j)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				swap = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = swap;
			}
		}
	}
	i = 0;
	while (argc > ++i)
		ft_putstr(argv[i]);
	return (0);
}
