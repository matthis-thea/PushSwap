/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:43:48 by haze              #+#    #+#             */
/*   Updated: 2023/02/22 11:49:58 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

// int	ft_atoi(char *thestring)
// {
// 	long long int	i;
// 	long long int	valeur;
// 	int				moins;

// 	i = 0;
// 	valeur = 0;
// 	moins = 0;
// 	while ((thestring[i] >= 9 && thestring[i] <= 13) || thestring[i] == 32)
// 		i++;
// 	if (thestring[i] == 43 || thestring[i] == 45)
// 	{
// 		if (thestring[i] == 45)
// 			moins++;
// 		i++;
// 	}
// 	while (thestring[i] && (thestring[i] >= 48 && thestring[i] <= 57))
// 	{
// 		valeur = ((valeur * 10) + (thestring[i] - 48));
// 		i++;
// 	}
// 	if (moins)
// 		valeur = -valeur;
// 	if (!(thestring[i] >= 48 && thestring[i] <= 57) && valeur == 0)
// 		return (0);
// 	return (valeur);
// }

// long long int *affichage(void)
// {
// 	ft_printf("Error\n");
// 	return (0);
// }

// long long int	*ft_placement_nb(char **s, long long int *tab)
// {
// 	int		i;
// 	int		z;

// 	z = 0;
// 	i = 1;
// 	while (s[i])
// 	{
// 		tab[z] = ft_atoi(s[i]);
// 		z++;
// 		i++;
// 	}
// 	return (tab);
// }


// long long int *ft_split(char **s, int taille, long long int *tab)
// {
// 	int					verification;

// 	tab = ft_placement_nb(s, tab);
// 	// verification = ft_verif_nb_double_char(s);
// 	// if (verification == 0)
// 	// {
// 	// 	free(tab);
// 	// 	return (affichage());
// 	// }
// 	verification = ft_verif_totale(tab, taille);
// 	if (verification == 0)
// 	{
// 		free(tab);
// 		return (affichage());
// 	}
// 	return (tab);
// }


// int main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		return (0);
// 	else
// 	{
// 		long long int		*tab;
// 		// slist *Mysl = NULL;
// 		tab = NULL;
// 		tab = malloc(sizeof(long long int) * argc - 1);
// 		if (!tab)
// 			return (0);
// 		tab = ft_split(argv, argc - 1, tab);
// 		if (!tab)
// 			return (0);
// 		int i = 0;
// 		while (i < argc)
// 		{
// 			ft_printf("%d", tab[i]);
// 			i++;
// 		}
		
// 	}
// }
