/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:22:24 by absouman          #+#    #+#             */
/*   Updated: 2025/11/10 21:51:13 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big(t_stack **a, t_stack **b)
{
	int	min;

	if (!a || !*a)
		return ;
	while (*a)
	{
		min = find_min(*a);
		while ((*a)->value != min)
		{
			sa(*a);
		}
		pb(a, b);
	}
	while (*b)
	{
		pa(a, b);
	}
}
