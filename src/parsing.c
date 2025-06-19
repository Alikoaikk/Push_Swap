/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:43:39 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 14:58:54 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valide(const char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_node *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

long	ft_atol(const char *str)
{
	long	result ;
	int		sign ;
	int		i ;

	result = 0 ;
	sign = 1 ;
	i = 0 ;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	parse_args(int argc, char **argv, t_node **stack)
{
	int		i;
	long	num ;

	i = 1;
	while (i < argc)
	{
		num = ft_atol(argv[i]);
		if (!is_valide(argv[i]) || num < INT_MIN || num > INT_MAX
			|| is_duplicate(*stack, (int)num))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		append_node(stack, (int)num);
		i++;
	}
}

void	parse_split(char *arg, t_node **stack)
{
	char	**split;
	int		i;
	long	num;

	i = 0;
	split = ft_split(arg, ' ');
	if (!split)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (split[i])
	{
		num = ft_atol(split[i]);
		if (!is_valide(split[i]) || num < INT_MIN || num > INT_MAX
			|| is_duplicate(*stack, (int)num))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		append_node(stack, (int)num);
		free(split[i]);
		i++;
	}
	free(split);
}
