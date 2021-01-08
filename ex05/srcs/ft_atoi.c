/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:58:33 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/03 18:23:15 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_neg(int j, char *str)
{
	int	count;

	count = 0;
	while (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			count++;
		j++;
	}
	if (count % 2 == 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	j = i;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (is_neg(j, str) == 1)
		return (-nbr);
	else
		return (nbr);
}
