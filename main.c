/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:06:28 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/18 01:15:46 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	view(t_node *stack)
{
	t_node	*tmp ;

	tmp = stack;
	while (tmp)
	{
		printf("Value: %d\n", tmp->value);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack;

	stack = NULL ;
	if (argc < 2)
		return (0);
	if (argc == 2)
		parse_split(argv[1], &stack);
	else
		parse_args(argc, argv, &stack);
	view(stack);
	return (0);
}
