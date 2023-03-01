/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:43:48 by haze              #+#    #+#             */
/*   Updated: 2023/02/23 14:55:39 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

void create(t_swap **swap, int value)
{
	t_swap *new_swap;

	new_swap = NULL;
	new_swap = malloc(sizeof(t_swap));
	if (!new_swap)
		return ;
	new_swap->valeur = value;
	new_swap->next = *swap;
	*swap = new_swap;
}

void	push_into_chained(char **argv, int taille, t_swap **swap)
{
	int i;

	i = 0;
	while (i < taille)
	{
		create(swap, ft_atoi(argv[i]));
		i++;
	}
}

void	View(t_swap *swap)
{
	while (swap)
	{
		ft_printf("%d\n",swap->valeur);
        swap = swap->next;
	}
}

int main(int argc, char **argv)
{
	(void) argc;
	t_swap *swap = NULL;
	int verif = 0;
	verif = verif_if_is_totale(argv, argc);
	if (verif == 0)
		return (0);
	push_into_chained(argv, argc, &swap);
	View(swap);

	return (0);
}
