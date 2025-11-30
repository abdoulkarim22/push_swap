/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absouman <absouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:52:33 by absouman          #+#    #+#             */
/*   Updated: 2025/11/30 21:41:57 by absouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	has_duplicates(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	count_args(char **argv)
{
	int	count;

	count = 0;
	while (argv[count])
		count++;
	return (count);
}

// static void	check_and_convert(char *arg, int *table_args, int i)
// {
// 	long	num;

// 	if (!is_number(arg))
// 	{
// 		free(table_args);
// 		ft_error(NULL, NULL, NULL);
// 	}
// 	num = ft_atoi(arg);
// 	if (num < INT_MIN || num > INT_MAX)
// 	{
// 		free(table_args);
// 		ft_error(NULL, NULL, NULL);
// 	}
// 	table_args[i] = (int)num;
// }

void	check_args(char **argv, int free_argv)
{
	int		i;
	int		*table_args;
	int		count;

	if (!argv || !argv[0])
	{
		if (free_argv)
			free_split(argv);
		ft_error(NULL, NULL, NULL);
	}

	count = count_args(argv);
	table_args = (int *)ft_calloc(count, sizeof(int));
	if (!table_args)
	{
		if (free_argv)
			free_split(argv);
		ft_error(NULL, NULL, NULL);
	}

	i = 0;
	while (argv[i])
	{
		long num = ft_atoi(argv[i]);
		if (!is_number(argv[i]) || num < INT_MIN || num > INT_MAX)
		{
			free(table_args);
			if (free_argv)
				free_split(argv);
			ft_error(NULL, NULL, NULL);
		}
		table_args[i] = (int)num;
		i++;
	}
	
	if (has_duplicates(table_args, count))
	{
		free(table_args);
		if (free_argv)
			free_split(argv);
		ft_error(NULL, NULL, NULL);
	}
	free(table_args);
}
