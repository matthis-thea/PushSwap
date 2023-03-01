/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:27:40 by mthea             #+#    #+#             */
/*   Updated: 2023/02/23 14:55:45 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
#include <stdio.h>
# include "../ft_printf/ft_printf.h"
typedef struct s_swap
{
		int valeur;
		struct s_swap	*next;
}				t_swap;

int				verif_if_is_number(char **tab);
long long int	ft_atoi(char *thestring);
int				verif_if_is_int(char **tab);
int				verif_if_is_doublon(char **tab, int taille);
int				verif_if_is_totale(char ** tab, int taille);
void			create(t_swap **swap, int value);

#endif