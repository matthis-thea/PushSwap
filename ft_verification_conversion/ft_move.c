/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:02:15 by haze              #+#    #+#             */
/*   Updated: 2023/03/03 12:34:17 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

void	ra(t_swap *s, int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		s->stack_temp[i] = s->stack_a[i];
		i++;
	}
	max--;
	i = 0;
	s->stack_a[max] = s->stack_temp[i];
	while (i < max)
	{
		s->stack_a[i] = s->stack_temp[i + 1];
		i++;
	}
	ft_printf("ra\n");
}

void	pb(t_swap *s, int max)
{
	int	j;
	int	i;

	j = max - 1;
	i = 0;
	while (j > 0)
	{
		i = s->stack_b[j];
		if (i == -1)
			break ;
		j--;
	}
	s->stack_b[j] = s->stack_a[0];
	ft_printf("pb\n");
}

void	pa(t_swap *s, int max)
{
	int	verif;

	verif = 0;
	verif = realloc_stack_pa(s, max);
	if (verif == 0)
		return ;
	realloc_stack_b(s);
	ft_printf("pa\n");
}

void	free_all(t_swap *s)
{
	free(s->stack_a);
	free(s->stack_b);
	free(s->stack_temp);
	free(s);
}
