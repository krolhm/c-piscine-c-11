/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:43:34 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/19 14:27:51 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		check;

	check = 1;
	i = 0;
	while (++i < length)
		if (f(tab[i - 1], tab[i]) > 0)
			check = 0;
	i = 0;
	if (check == 0)
		while (++i < length)
			if (f(tab[i - 1], tab[i]) < 0)
				return (0);
	return (1);
}
