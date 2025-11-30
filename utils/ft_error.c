/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:47:59 by absouman          #+#    #+#             */
/*   Updated: 2025/11/29 21:14:41 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(t_stack **a, t_stack **b, char **tab)
{
	if (a && *a)
	{
		free_stack(a);
	}
	if (b && *b)
	{
		free_stack(b);
	}
	if (tab)
	{
		free_tab(tab);
	}
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
