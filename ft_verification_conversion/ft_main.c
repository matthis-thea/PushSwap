/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:43:48 by haze              #+#    #+#             */
/*   Updated: 2023/03/07 01:55:08 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

int	argc_equal_2(t_swap *s, char **argv)
{
	int	taille;
	int	verif;

	verif = 0;
	taille = strlen_if_two(argv);
	s = allocation_tab_bis(s, taille, argv);
	verif = sort_tab_a(s);
	if (verif == 1)
	{
		free_all(s);
		return (0);
	}
	sort_tab_temp(s);
	convert_stack_a(s);
	final_sorted(s, taille);
	free_all(s);
	return (0);
}

int	argc_more_2(t_swap *s, char **argv, int argc)
{
	int	verif;

	verif = 0;
	s = allocation_tab(s, argc - 1, argv);
	verif = sort_tab_a(s);
	if (verif == 1)
	{
		free_all(s);
		return (0);
	}
	sort_tab_temp(s);
	convert_stack_a(s);
	final_sorted(s, argc - 1);
	free_all(s);
	return (0);
}

int	main(int argc, char **argv)
{
	t_swap	*s;
	int		verif;

	s = NULL;
	verif = verif_if_is_totale(argv, argc);
	if (verif == 0)
		return (0);
	if (argc == 2)
		argc_equal_2(s, argv);
	else
		argc_more_2(s, argv, argc);
	return (0);
}
