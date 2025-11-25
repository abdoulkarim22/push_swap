/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:59:48 by absouman          #+#    #+#             */
/*   Updated: 2025/11/10 15:30:02 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a)
{
	int	first_value;

	if (!a || !a->next)
		return ;
	first_value = a->value;
	a->value = a->next->value;
	a->next->value = first_value;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	first_value;

	if (!b || !b->next)
		return ;
	first_value = b->value;
	b->value = b->next->value;
	b->next->value = first_value;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	int	first_value;

	if (a && a->next)
	{
		first_value = a->value;
		a->value = a->next->value;
		a->next->value = first_value;
	}
	if (b && b->next)
	{
		first_value = b->value;
		b->value = b->next->value;
		b->next->value = first_value;
	}
	write(1, "ss\n", 3);
}
