/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:30:50 by absouman          #+#    #+#             */
/*   Updated: 2025/11/09 18:43:22 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*first_value;

	if (!b || !*b)
		return ;
	first_value = *b;
	*b = (*b)->next;
	first_value->next = *a;
	*a = first_value;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*first_value;

	if (!a || !*a)
		return ;
	first_value = *a;
	*a = (*a)->next;
	first_value->next = *b;
	*b = first_value;
	write(1, "pb\n", 3);
}
