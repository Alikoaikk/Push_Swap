/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_arr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:28:16 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/20 15:47:28 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_array(t_node *stack, int size)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size && stack)
	{
		arr[i++] = stack->value;
		stack = stack->next;
	}
	return (arr);
}

int	find_min_index(int *arr, int size)
{
	int	i;
	int	min_index;

	min_index = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] < arr[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}
