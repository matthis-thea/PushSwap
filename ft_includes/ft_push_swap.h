/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:27:40 by mthea             #+#    #+#             */
/*   Updated: 2023/03/07 03:15:27 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
# include "../ft_printf/ft_printf.h"

typedef struct s_swap
{
	int	max;
	int	*stack_a;
	int	*stack_temp;
	int	*stack_b;
	int	temp;
	int	i;
	int	j;
}				t_swap;

int				verif_if_is_number(char **tab);
int				verif_if_is_number_bis(char **tab);
long long int	ft_atoi(char *thestring);
int				verif_if_is_int(char **tab);
int				verif_if_is_int_bis(char **tab);
int				verif_if_is_doublon(char **tab, int taille);
int				verif_if_is_doublon_bis(char **tab, int taille);
int				verif_if_is_totale(char **tab, int taille);
int				verif_if_is_totale_bis(char **tab);
int				allocation_all_tab(t_swap *s);
t_swap			*allocation_tab(t_swap *s, int taille, char **argv);
t_swap			*allocation_tab_bis(t_swap *s, int taille, char **argv);
void			sort_tab_temp(t_swap *s);
void			convert_stack_a(t_swap *s);
void			realloc_stack_pa_bis(t_swap *s, int *j, int *i, int *max);
int				realloc_stack_pb(t_swap *s, int max);
int				realloc_stack_pa(t_swap *s, int max);
int				realloc_stack_b(t_swap *s);
void			ra(t_swap *s, int max);
void			pb(t_swap *s, int max);
void			pa(t_swap *s, int max);
void			sa(t_swap *s);
void			rra(t_swap *s, int max);
void			sorted_bis(int max_bits, int pos, t_swap *s);
void			big_sorted(t_swap *s);
void			sorted_bis(int max_bits, int pos, t_swap *s);
void			free_all(t_swap *s);
int				sort_tab_a(t_swap *s);
char			**ft_free_malloc(char **tab, int pos);
int				ft_alloc_nb_col(const char *s, char c);
char			**ft_alloc_totale(const char *s, char c, char **tab);
char			**ft_placement_mots(const char *s, char c, char **tab);
char			**ft_split(char const *s, char c);
int				strlen_if_two(char **argv);
void			alloc_for_two(char **argv, int verif, t_swap *s);
void			final_sorted(t_swap *s, int taille);
void			length_three(t_swap *s, int taille);
void			length_five(t_swap *s, int taille);
void			length_four(t_swap *s, int taille);
int				length_fivebis(t_swap *s, int taille, int *doublon);
int				pos(t_swap *s, int taille);
int				sort_tab_a_length_five(t_swap *s);
#endif