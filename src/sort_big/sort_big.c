/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:49:32 by absouman          #+#    #+#             */
/*   Updated: 2025/11/24 12:51:21 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	get_max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = stack->value;
	bits = 0;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	sort_big(t_stack **a, t_stack **b)
{
	int		size;
	int		bit;
	int		i;
	t_stack	*top_element_of_a;
	int		max_bits;

	size = stack_size(*a);
	max_bits = get_max_bits(*a);
	bit = 0;
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			top_element_of_a = *a;
			if (((top_element_of_a->value >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}
