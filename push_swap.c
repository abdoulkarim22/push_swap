/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:28:49 by absouman          #+#    #+#             */
/*   Updated: 2025/11/10 21:48:18 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	if (argc < 2)
		return (0);
	argv++;
	check_args(argv);
	init_stack(&a, &b, argv);
	size = stack_size(a);
		if (size <= 5)
			sort_small(&a, &b);
		else
			sort_big(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
