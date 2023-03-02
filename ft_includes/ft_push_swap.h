/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:27:40 by mthea             #+#    #+#             */
/*   Updated: 2023/03/02 18:49:57 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
# include "../ft_printf/ft_printf.h"
typedef struct s_swap
{
		int 	max;
		int		*stack_a;
		int 	*stack_temp;
		int		*stack_b;
}				t_swap;

int				verif_if_is_number(char **tab);
long long int	ft_atoi(char *thestring);
int				verif_if_is_int(char **tab);
int				verif_if_is_doublon(char **tab, int taille);
int				verif_if_is_totale(char ** tab, int taille);
int			allocation_all_tab(t_swap *s);
t_swap			*allocation_tab(t_swap *s, int taille, char **argv);
void			sort_tab_temp(t_swap *s);
void		convert_stack_a(t_swap *s);
int realloc_stack_pb(t_swap *s, int	max);
int realloc_stack_pa(t_swap *s, int max);
int realloc_stack_b(t_swap *s);
void ra(t_swap *s, int max);
void pb(t_swap *s, int max);
void pa(t_swap *s, int max);
void test(t_swap *s);

#endif