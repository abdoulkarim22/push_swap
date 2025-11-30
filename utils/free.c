/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:38:30 by absouman          #+#    #+#             */
/*   Updated: 2025/11/30 20:08:48 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*next_node;

	while (*stack)
	{
		next_node = (*stack)->next;
		free(*stack);
		*stack = next_node;
	}
}

void	free_tab(char **tab)
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_split(char **split_tab)
{
	int	i;

	if (!split_tab)
		return ;
	i = 0;
	while (split_tab[i])
	{
		free(split_tab[i]);
		i++;
	}
	free(split_tab);
}
