/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:00:53 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/12 15:42:40 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab2;

	i = 0;
	if ((tab2 = (int *)malloc(sizeof(int) * length)) == 0)
		return (0);
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}
