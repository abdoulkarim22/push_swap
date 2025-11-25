/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:28:49 by absouman          #+#    #+#             */
/*   Updated: 2025/11/25 17:07:11 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handle_sort(char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	check_args(argv);
	a = NULL;
	b = NULL;
	init_stack(&a, &b, argv);
	if (is_sorted(a))
	{
		free_stack(&a);
		free_stack(&b);
		return ;
	}
	size = stack_size(a);
	if (size <= 5)
		sort_small(&a, &b);
	else
		sort_big(&a, &b);
	free_stack(&a);
	free_stack(&b);
}

int	main(int argc, char **argv)
{
	char	**args;

	if (argc < 2)
		return (0);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	handle_sort(args);
	if (argc == 2)
		free_tab(args);
	return (0);
}
