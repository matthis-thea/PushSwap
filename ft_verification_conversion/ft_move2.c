/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:02:15 by haze              #+#    #+#             */
/*   Updated: 2023/03/06 21:44:39 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

void lenght_3(t_swap *s, int taille)
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

void lenght_5(t_swap *s, int taille)
{
	
}

void	final_sorted(t_swap *s, int taille)
{
	if (taille == 2)
		ra(s, taille);
	else if (taille == 3)
		lenght_3(s, taille);
	else if (taille == 5)
		lenght_5(s, taille);
	else
		big_sorted(s);

}