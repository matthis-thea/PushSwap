/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:27:40 by mthea             #+#    #+#             */
/*   Updated: 2023/02/08 16:19:05 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
# include "../ft_printf/ft_printf.h"

long long int	ft_atoi(const char *thestring);
int				**ft_free_malloc(long long int **tab, int pos);
long long int	ft_nb_col(char **s);
long long int	*ft_placement_nb(char **s, long long int *tab);
long long int	*ft_split(char **s);
int				verification_doublon(long long int *tab, int taille);
int				verification_int(long long int *tab, int taille);
int				verification_nombre(char **tab);
int				verification_totale(long long int *tab, int taille);
#endif