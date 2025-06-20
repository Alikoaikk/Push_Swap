/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:55:44 by mtohmeh           #+#    #+#             */
/*   Updated: 2025/06/20 16:49:45 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **a, int *arr)
{
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] < arr[2])
		sa(a);
	else if (arr[0] > arr[1] && arr[1] > arr[2])
	{
		sa(a);
		rra(a, 1);
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2])
		ra(a, 1);
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] < arr[2])
	{
		sa(a);
		ra(a, 1);
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
		rra(a, 1);
}

void	sort_four(t_node **a, t_node **b, int *arr)
{
	int	minindex;
	int	i;
	int	*newarr;

	i = 0;
	minindex = find_min_index(arr, 4);
	while (i < minindex)
	{
		ra(a, 1);
		i++;
	}
	pb(a, b);
	newarr = stack_to_array(*a, 3);
	sort_three(a, newarr);
	free(newarr);
	pa(a, b);
}

void	sort_five(t_node **a, t_node **b, int *arr)
{
	int	minindex;
	int	i;
	int	*newarray;

	i = 0;
	minindex = find_min_index(arr, 5);
	while (i < minindex)
	{
		ra(a, 1);
		i++;
	}
	pb(a, b);
	newarray = stack_to_array(*a, 4);
	sort_four(a, b, newarray);
	free(newarray);
	pa(a, b);
}

void	small_sort(t_node **a, t_node **b, int *arr)
{
	int	size;

	size = stack_size(*a);
	if (size == 1)
		return ;
	if (size == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a);
	}
	else if (size == 3)
	{
		sort_three(a, arr);
	}
	else if (size == 4)
	{
		sort_four(a, b, arr);
	}
	else if (size == 5)
	{
		sort_five(a, b, arr);
	}
}
