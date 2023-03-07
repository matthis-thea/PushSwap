/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:02:15 by haze              #+#    #+#             */
/*   Updated: 2023/03/07 03:25:24 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

void	length_three(t_swap *s, int taille)
{
	if (s->stack_a[0] > s->stack_a[1] && s->stack_a[0] < s->stack_a[2])
		sa(s);
	else if (s->stack_a[0] > s->stack_a[1] && s->stack_a[1] > s->stack_a[2])
	{
		sa(s);
		rra(s, taille);
	}
	else if (s->stack_a[0] > s->stack_a[1] && s->stack_a[0] > s->stack_a[2])
		ra(s, taille);
	else if (s->stack_a[0] < s->stack_a[1] && s->stack_a[0] < s->stack_a[2])
	{
		sa(s);
		ra(s, taille);
	}
	else
		rra(s, taille);
}

int	length_fivebis(t_swap *s, int taille, int *doublon)
{
	if (s->stack_a[0] == 0)
	{
		pb(s, taille);
		taille--;
		realloc_stack_pb(s, taille);
		*doublon = 1;
	}
	if (s->stack_a[0] == 1 && *doublon == 1)
	{
		pb(s, taille);
		taille--;
		realloc_stack_pb(s, taille);
		*doublon = 2;
	}
	return (taille);
}

void	length_five(t_swap *s, int taille)
{
	int	doublon;
	int	posi;

	posi = pos(s, taille);
	doublon = 0;
	taille = length_fivebis(s, taille, &doublon);
	doublon = 0;
	while (doublon != 2)
	{
		if (posi <= 3)
			ra(s, taille);
		else
			rra(s, taille);
		taille = length_fivebis(s, taille, &doublon);
	}
	taille = sort_tab_a_length_five(s);
	if (taille == 1)
	{
		pa(s, 3);
		return ;
	}
	length_three(s, 3);
	pa(s, 3);
}

void	length_four(t_swap *s, int taille)
{
	int	doublon;

	doublon = 0;
	while (doublon != 1)
	{
		if (s->stack_a[0] == 0)
		{
			pb(s, taille);
			taille--;
			realloc_stack_pb(s, taille);
			doublon = 1;
		}
		ra(s, taille);
	}
	length_three(s, taille);
	pa(s, taille);
}

void	final_sorted(t_swap *s, int taille)
{
	if (taille == 2)
		ra(s, taille);
	else if (taille == 3)
		length_three(s, taille);
	else if (taille == 4)
		length_four(s, taille);
	else if (taille == 5)
		length_five(s, taille);
	else
		big_sorted(s);
}
