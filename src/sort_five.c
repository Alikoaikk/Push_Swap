/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:55:44 by mtohmeh           #+#    #+#             */
/*   Updated: 2025/06/20 18:31:30 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **a)
{
	int	first = (*a)->value;
	int	second = (*a)->next->value;
	int	third = (*a)->next->next->value;

	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a, 1);
	}
	else if (first > second && second < third && first > third)
		ra(a, 1);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a, 1);
	}
	else if (first < second && second > third && first > third)
		rra(a, 1);
}

int	find_min_index_stack(t_node *a)
{
	int	min = a->value;
	int	index = 0;
	int	min_index = 0;
	t_node *current = a;

	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			min_index = index;
		}
		current = current->next;
		index++;
	}
	return (min_index);
}

void	sort_four(t_node **a, t_node **b)
{
	int	min_index = find_min_index_stack(*a);

	while (min_index--)
		ra(a, 1);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_node **a, t_node **b)
{
	int	min_index = find_min_index_stack(*a);

	while (min_index--)
		ra(a, 1);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

void	small_sort(t_node **a, t_node **b)
{
	int	size = stack_size(*a);

	if (size == 1)
		return ;
	else if (size == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a);
	}
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
}

