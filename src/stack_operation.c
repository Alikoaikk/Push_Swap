/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:57:24 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/17 23:15:49 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **top, int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new->value = value ;
	new->next = *top ;
	*top = new ;
}

int	pop(t_node **top)
{
	t_node	*temp;
	int		pop_value;

	if (!*top)
		return (-1);
	temp = *top ;
	pop_value = temp->value ;
	*top = temp->next ;
	free(temp);
	return (pop_value);
}

int	peek(t_node *top)
{
	if (top == NULL)
		return (-1);
	return (top->value);
}

// #include <stdio.h>
// int main() {
//     t_node *stack = NULL;

//     push(&stack, 10);
//     push(&stack, 20);
//     push(&stack, 30);

//     printf("Top: %d\n", peek(stack));     // 30

//     printf("Popped: %d\n", pop(&stack));  // 30
//     printf("Top: %d\n", peek(stack));     // 20   // 2

//     return 0;
// }