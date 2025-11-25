/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:02:17 by absouman          #+#    #+#             */
/*   Updated: 2025/11/13 15:06:35 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*create_stack_a(char **argv, int i)
{
	t_stack	*node;

	if (!argv[i])
		return (NULL);
	node = malloc(sizeof(t_stack));
	if (!node)
		ft_error(NULL, NULL, NULL);
	node->value = ft_atoi(argv[i]);
	node->next = create_stack_a(argv, i + 1);
	return (node);
}

void	init_stack(t_stack **a, t_stack **b, char **argv)
{
	*a = create_stack_a(argv, 0);
	*b = NULL;
}
