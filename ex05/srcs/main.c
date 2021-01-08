/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:21:57 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/13 17:47:40 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_operation(char *arg)
{
	if (arg[0] == '+' || arg[0] == '-' || arg[0] == '/' || arg[0] == '*'
			|| arg[0] == '%')
		return (1);
	else
		return (0);
}

int		valid_op(char op, int two)
{
	if (op == '/' && two == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (op == '%' && two == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else
		return (1);
}

int		calcul(int one, char op, int two)
{
	if (op == '+')
		return (one + two);
	else if (op == '-')
		return (one - two);
	else if (op == '/')
		return (one / two);
	else if (op == '%')
		return (one % two);
	else if (op == '*')
		return (one * two);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int one;
	int two;

	if (argc != 4)
		return (0);
	if (!is_operation(argv[2]))
	{
		ft_putstr("0\n");
		return (0);
	}
	one = ft_atoi(argv[1]);
	two = ft_atoi(argv[3]);
	if (!valid_op(argv[2][0], two))
		return (0);
	ft_putnbr(calcul(one, argv[2][0], two));
	ft_putchar('\n');
	return (0);
}
