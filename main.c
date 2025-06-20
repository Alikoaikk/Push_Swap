/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:06:28 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/20 16:08:59 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size ;
	int		*arr ;

	a = NULL ;
	b = NULL ;
	if (argc < 2)
		return (0);
	if (argc == 2)
		parse_split(argv[1], &a);
	else
		parse_args(argc, argv, &a);
	size = stack_size(a);
	*arr = extract_values(a, size);
	if (size <= 5)
		small_sort(&a, &b, arr);
	else
		push_swap(&a, &b);
	free(arr);
	free_stack(a);
	free_stack(b);
	return (0);
}

// void	view(t_node *stack)
// {
// 	t_node	*tmp ;

//     if (!stack)
//         write(2, "Stack empty", 11);
// 	tmp = stack;
// 	while (tmp)
// 	{
// 		printf("Value: %d\n", tmp->value);
// 		tmp = tmp->next;
// 	}
// }
