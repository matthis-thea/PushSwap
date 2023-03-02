/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:43:48 by haze              #+#    #+#             */
/*   Updated: 2023/03/02 23:04:33 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"


void	sort_tab_temp(t_swap *s)
{
	int	i;
	int	j;
	int temp;

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
			if(s->stack_a[i] == s->stack_temp[j])
			{
				s->stack_a[i] = j;
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void ra(t_swap *s, int max)
{
	int i;

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



void pb(t_swap *s, int max)
{
	int j;
	int	i;

	j = max - 1;
	i = 0;
	while (j > 0)
	{
		i = s->stack_b[j];
		if (i == -1)
			break;
		j--;
	}
	s->stack_b[j] = s->stack_a[0];
	ft_printf("pb\n");
}


void pa(t_swap *s, int max)
{
	int verif;

	verif = 0;
	verif = realloc_stack_pa(s, max);
	if (verif == 0)
		return ;
	realloc_stack_b(s);
	ft_printf("pa\n");
}
void init()
{
	int last_num;
	int	max_bits;
	int	i;
	int	j;
	int pos;
	int verif;

	verif = 0;
	i = 0;
	j = 0;
	last_num = s->max - 1;
	max_bits = 0;
	while ((last_num >> max_bits) != 0)
	{
		max_bits++;
	}
	last_num = s->max;
}
void test(t_swap *s)
{
	int last_num;
	int	max_bits;
	int	i;
	int	j;
	int pos;
	int verif;

	verif = 0;
	i = 0;
	j = 0;
	last_num = s->max - 1;
	max_bits = 0;
	while ((last_num >> max_bits) != 0)
	{
		max_bits++;
	}
	last_num = s->max;
	while (i < max_bits)
	{
		while (j < s->max)
		{
			pos = s->stack_a[0];
			if (((pos >> i) & 1) == 1)
			ra(s, last_num);
			else
			{
				pb(s, last_num);
				last_num--;
				verif = realloc_stack_pb(s, last_num);
				if (verif == 0)
					return ;
			}
			j++;
		}
		pa(s, last_num);
		last_num = s->max;
		j = 0;
		i++;
	}
}



int main(int argc, char **argv)
{
	(void) argc;
	t_swap *s = NULL;

	int verif = 0;
	verif = verif_if_is_totale(argv, argc);
	if (verif == 0)
		return (0);
	s = allocation_tab(s, argc - 1, argv);
	if (!s)
	{
		ft_printf("Erreur\n");
		return (0);
	}
	sort_tab_temp(s);
	convert_stack_a(s);
	int i = 0;
	while (i < argc - 1)
	{
		ft_printf("Valeur de stack a : %d\n", s->stack_a[i]);
		i++;
	}
	test(s);
	i = 0;
	while (i < argc - 1)
	{
		ft_printf("Valeur de stack a : %d\n", s->stack_a[i]);
		i++;
	}
	return (0);
}
