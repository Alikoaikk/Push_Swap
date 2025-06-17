/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 22:29:11 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/18 00:44:13 by akoaik           ###   ########.fr       */
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

#endif