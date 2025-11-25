/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:47:59 by absouman          #+#    #+#             */
/*   Updated: 2025/11/25 16:01:51 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(t_stack **a, t_stack **b, char **tab)
{
	if (tab)
	{
		free_split(tab);
	}
	if (a && *a)
	{
		free_stack(a);
	}
	if (b && *b)
	{
		free_stack(b);
	}
	printf("Error\n");
	exit(EXIT_FAILURE);
}
