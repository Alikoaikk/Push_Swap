/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_oper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:26:34 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 01:16:52 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	t_node	*first;
	t_node	*second;

	if (!*a || !(*a)->next)
		return ;
	first = *a ;
	second = first->next ;
	first->next = second->next ;
	second->next = first ;
	*a = second ;
	write(1, "sa\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}

void	ra(t_node **a, int print)
{
	t_node	*first;
	t_node	*i;

	if (!*a || !(*a)->next)
		return ;
	first = *a ;
	*a = (*a)->next ;
	i = *a ;
	while (i->next)
		i = i->next ;
	i->next = first ;
	first->next = NULL ;
	if (print)
		write(1, "ra\n", 3);
}
