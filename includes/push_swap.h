/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 22:29:11 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 01:21:56 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next ;
}					t_node;

char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
void	parse_split(char *arg, t_node **stack);
void	parse_args(int argc, char **argv, t_node **stack);
void	push(t_node **top, int value);
int		pop(t_node **top);
int		peek(t_node *top);
void	sa(t_node **a);
void	pa(t_node **a, t_node **b);
void	ra(t_node **a, int print);
void	sb(t_node **b);
void	pb(t_node **a, t_node **b);
void	rb(t_node **b, int print);
void	ss(t_node **a, t_node **b);
void	rr(t_node **a, t_node **b);

#endif