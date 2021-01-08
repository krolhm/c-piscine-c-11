/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:19:51 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/19 14:29:10 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			if ((*cmp)(tab[i], tab[j + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
