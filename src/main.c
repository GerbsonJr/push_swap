/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junior <junior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:02:30 by gmateus-          #+#    #+#             */
/*   Updated: 2026/02/23 13:46:14 by junior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_malloc(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;
	char	**split;

	count = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (0);
		j = 0;
		while (split[j++])
			count++;
		free_split(split);
		i++;
	}
	return (count);
}

static char	**cleanup_return_null(char **split, char **res)
{
	if (split)
		free_split(split);
	if (res)
		free_split(res);
	return (NULL);
}

static int	process_one_arg(char **res, char *arg, size_t *index)
{
	char	**split;
	size_t	j;

	split = ft_split(arg, ' ');
	if (!split || !split[0])
		return (free_split(split), free_split(res), 0);
	j = 0;
	while (split[j])
	{
		res[*index] = ft_strdup(split[j]);
		if (!res[*index])
			return (free_split(split), free_split(res), 0);
		(*index)++;
		j++;
	}
	free_split(split);
	return (1);
}

char	**parse_args(int argc, char **argv)
{
	char	**res;
	size_t	index;
	int		i;

	res = ft_calloc(sizeof(char *), 1 + count_malloc(argc, argv));
	if (!res)
		return (NULL);
	index = 0;
	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '\0')
			return (cleanup_return_null(NULL, res));
		if (!process_one_arg(res, argv[i], &index))
			return (NULL);
		i++;
	}
	res[index] = NULL;
	return (res);
}

int	main(int argc, char **argv)
{
	t_stacks	*stack_a;
	t_stacks	*stack_b;
	char		**matriz;
	int			len;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	matriz = parse_args(argc, argv);
	if (!matriz)
		print_error(&stack_a, matriz);
	start_stacks(matriz, &stack_a);
	normalize(&stack_a);
	if (!is_sorted(stack_a))
	{
		len = stack_len(stack_a);
		if (len <= 5)
			small_sort(&stack_a, &stack_b, len);
		else
			radix_sort(&stack_a, &stack_b, len);
	}
	mem_clear(&stack_a, matriz);
	return (0);
}