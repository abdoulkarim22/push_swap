/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:49:49 by absouman          #+#    #+#             */
/*   Updated: 2025/11/10 20:33:26 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second < third && first < third)
		sa(*a);
	else if (first > second && second > third)
	{
		sa(*a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(*a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_four(t_stack	**a, t_stack **b)
{
	int	min;

	min = find_min(*a);
	while ((*a)->value != min)
		ra(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack	**a, t_stack **b)
{
	int	min;

	min = find_min(*a);
	while ((*a)->value != min)
		ra(a);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

void	sort_small(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2 && (*a)->value > (*a)->next->value)
	{
		sa(*a);
	}
	else if (size == 3)
	{
		sort_three(a);
	}
	else if (size == 4)
	{
		sort_four(a, b);
	}
	else if (size == 5)
	{
		sort_five(a, b);
	}
}
