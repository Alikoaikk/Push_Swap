/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:06:28 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 01:34:44 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	view(t_node *stack)
// {
// 	t_node	*tmp ;

// 	tmp = stack;
// 	while (tmp)
// 	{
// 		printf("Value: %d\n", tmp->value);
// 		tmp = tmp->next;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	t_node	*stack;

// 	stack = NULL ;
// 	if (argc < 2)
// 		return (0);
// 	if (argc == 2)
// 		parse_split(argv[1], &stack);
// 	else
// 		parse_args(argc, argv, &stack);
// 	view(stack);
// 	return (0);
// }

t_node	*new_node(int value)
{
	t_node	*node ;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	print_stack(const char *label, t_node *stack)
{
	printf("%s: ", label);
	while (stack)
	{
		printf("%d ", stack->value);
		stack = stack->next;
	}
	printf("\n");
}

int	main(void)
{
	t_node *node1 = NULL ;
	t_node *node2 = NULL ;

	node1 = new_node(2);
	node2 = new_node(3);
	node1->next = newnode(12);
}
