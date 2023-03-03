/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:43:48 by haze              #+#    #+#             */
/*   Updated: 2023/03/03 12:34:21 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

int	sort_tab_a(t_swap *s)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < s->max)
	{
		while (j < s->max)
		{
			if (s->stack_a[i] > s->stack_a[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	sort_tab_temp(t_swap *s)
{
	int	i;
	int	j;
	int	temp;

	temp = 0;
	i = 0;
	j = 1;
	while (i < s->max)
	{
		while (j < s->max)
		{
			if (s->stack_temp[i] > s->stack_temp[j])
			{
				temp = s->stack_temp[j];
				s->stack_temp[j] = s->stack_temp[i];
				s->stack_temp[i] = temp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	convert_stack_a(t_swap *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < s->max)
	{
		while (j < s->max)
		{
			if (s->stack_a[i] == s->stack_temp[j])
			{
				s->stack_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void	sorted_bis(int max_bits, int pos, t_swap *s)
{
	int	last_num;

	last_num = s->max;
	while (s->i < max_bits)
	{
		while (s->j < s->max)
		{
			pos = s->stack_a[0];
			if (((pos >> s->i) & 1) == 1)
				ra(s, last_num);
			else
			{
				pb(s, last_num);
				last_num--;
				realloc_stack_pb(s, last_num);
			}
			(s->j)++;
		}
		pa(s, last_num);
		last_num = s->max;
		s->j = 0;
		(s->i)++;
	}
}

void	big_sorted(t_swap *s)
{
	int	max_bits;
	int	pos;
	int	verif;

	verif = s->max - 1;
	max_bits = 0;
	pos = 0;
	while ((verif >> max_bits) != 0)
	{
		max_bits++;
	}
	sorted_bis(max_bits, pos, s);
}

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	t_swap *s;
// 	int verif;

// 	s = NULL;
// 	if (argc > 1)
// 	{
// 		verif = verif_if_is_totale(argv, argc);
// 		if (verif == 0)
// 			return (0);
// 		s = allocation_tab(s, argc - 1, argv);
// 		if (!s)
// 		{
// 			ft_printf("Erreur\n");
// 			return (0);
// 		}
// 		verif = sort_tab_a(s);
// 		if (verif == 1)
// 		{
// 			free_all(s);
// 			return (0);
// 		}
// 		sort_tab_temp(s);
// 		convert_stack_a(s);
// 		big_sorted(s);
// 		free_all(s);
// 	}
// 	else
// 		return (0);
// 	return (0);
// }
