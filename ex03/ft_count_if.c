/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:35:54 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/13 17:03:31 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if (f(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}
