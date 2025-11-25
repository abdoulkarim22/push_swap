/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:33:38 by absouman          #+#    #+#             */
/*   Updated: 2025/11/25 16:16:42 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <stdint.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

// utils fuction prototypes
void	free_stack(t_stack **stack);
void	free_tab(char **tab);
void	ft_error(t_stack **a, t_stack **b, char **tab);
long	ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
int		ft_isdigit(int c);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(const char *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		is_sorted(t_stack *stack);
void	init_stack(t_stack **a, t_stack **b, char **argv);
char	*ft_strchr(const char *s, int c);
void	free_split(char **split);
int		is_number(char *str);

// src fuction prototypes
void	check_args(char **argv);

// fuction sa & sb & ss prototypes
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

// fuction pa & pb prototypes
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

// fuction ra & rb & rr prototypes
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rotate_stack(t_stack **stack);

// fuction rra & rrb & rrr prototypes
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	reverse_rotate(t_stack **stack);

// fuction sort_small.c prototypes
void	sort_small(t_stack **a, t_stack **b);
int		stack_size(t_stack *stack);
int		find_min(t_stack *stack);
void	sort_three(t_stack **a);
void	sort_five(t_stack	**a, t_stack **b);

// fuction sort_big.c prototypes
void	sort_big(t_stack **a, t_stack **b);

#endif