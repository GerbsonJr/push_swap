/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmateus- <gmateus@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:02:30 by gmateus-          #+#    #+#             */
/*   Updated: 2025/12/16 15:02:31 by gmateus-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**parse_args(int argc, char **argv)
{
	int		i;
	size_t	j;
	size_t	index;
	char	**res;
	char	**split;

	res = malloc(sizeof(char *) * 10000);
	if (!res)
		return (NULL);
	i = 0;
	index = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '\0')
			return (free_split(res), NULL);
		split = ft_split(argv[i], ' ');
		if (!split || split[0] == NULL)
			return (free_split(split), free_split(res), NULL);
		j = 0;
		while (split[j])
			res[index++] = ft_strdup(split[j++]);
		free_split(split);
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
