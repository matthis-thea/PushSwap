/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:45:44 by haze              #+#    #+#             */
/*   Updated: 2023/03/02 21:44:22 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

int			allocation_all_tab(t_swap *s)
{
	s->stack_a = malloc(sizeof(long long int) * s->max);
	if (!s->stack_a)
		return (0);
	s->stack_temp = malloc(sizeof(long long int) * s->max);
	if (!s->stack_temp)
	{
		free(s->stack_a);
		return (0);
	}
	s->stack_b = malloc(sizeof(long long int) * s->max);
	if (!s->stack_b)
	{
		free(s->stack_a);
		free(s->stack_temp);
		return (0);
	}
	return (1);
}

t_swap			*allocation_tab(t_swap *s, int taille, char **argv)
{
	int i;
	int j;
	int verif;

	verif = 0;
	j = 0;
	i = 1;
	s = malloc(sizeof(t_swap));
	if (!s)
		return (0);
	s->max = taille;
	verif = allocation_all_tab(s);
	if (verif == 0)
		return (0);
	while (argv[i])
	{
		s->stack_a[j] = ft_atoi(argv[i]);
		s->stack_temp[j] = ft_atoi(argv[i]);
		s->stack_b[j] = -1;
		i++;
		j++;
	}
	return (s);
}

int realloc_stack_pb(t_swap *s, int	max)
{
	int i;

	i = 0;
	while (i < max + 1)
	{
		s->stack_temp[i] = s->stack_a[i];
		i++;
	}
	free(s->stack_a);
	s->stack_a = malloc(sizeof(long long int) * max);
	if (!s->stack_a)
		return (0);
	i = 1;
	while (i <= max)
	{
		s->stack_a[i - 1] = s->stack_temp[i];
		i++;
	}
	return (1);
}

int realloc_stack_pa(t_swap *s, int max)
{
	int i;
	int j;
	int temp;

	j = s->max - 1;
	i = 0;
	while (i < max)
	{
		s->stack_temp[i] = s->stack_a[i];
		i++;
	}
	free(s->stack_a);
	s->stack_a = malloc(sizeof(long long int) * s->max);
	if (!s->stack_a)
		return (0);
	i--;
	while ( i >= 0)
	{
		s->stack_a[j] = s->stack_temp[i];
		j--;
		i--;
	}
	temp = j;
	j = max - 1;
	while (j > 0)
	{
		i = s->stack_b[j];
		if (i == -1)
			break;
		j--;
	}
	j++;
	i = 0;
	while (j < s->max)
	{
		s->stack_a[temp] = s->stack_b[j];
		temp--;
		j++;
	}
	return (1);
}

int realloc_stack_b(t_swap *s)
{
	int j;

	j = 0;
	free(s->stack_b);
	s->stack_b = malloc(sizeof(long long int) * s->max);
	if (!s->stack_b)
		return (0);
	while (j < s->max)
	{
		s->stack_b[j] = -1;
		j++;
	}
	return (1);
}