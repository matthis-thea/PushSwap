/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:43:48 by haze              #+#    #+#             */
/*   Updated: 2023/02/08 11:32:31 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

int	**ft_free_malloc(int **tab, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

int	ft_nb_col(char **s)
{
	int	i;
	int	j;
	int	compteur;

	compteur = 0;
	i = 1;
	j = 0;
	while (s[i])
	{
		while (s[i][j])
		{
			j++;
		}
		i++;
		j = 0;
		ft_printf("Valeur de j : %d\n", j);
		compteur++;
	}
	return (compteur);
}

// int	**ft_alloc_totale(char **s, int **tab)
// {
// 	int		i;
// 	int		j;

// 	i = 1;
// 	j = 0;
// 	while (s[i])
// 	{
// 		while (s[i][j])
// 		{
// 			if (s[j] == 32)
// 				break;	
// 			j++;
// 			if (s[j + 1] == '\0')
// 			{
// 				tab[i - 1] = malloc(sizeof(char) * j);
// 				if (tab[j] == NULL)
// 					return (ft_free_malloc(tab, j));
// 			}
// 		}
// 		i++;
// 		j = 0;
// 	}
// 	return (tab);
// }

// int **ft_placement_mots(char *s, int **tab)
// {
// 	int		i;
// 	int		j;

// 	i = 1;
// 	j = 0;
// 	while (s[i])
// 	{
// 		while (s[j])
// 		{
// 			j++;
// 			if (s[j + 1] == '\0' && j > 1)
// 			{
// 				tab[i - 1] = malloc(sizeof(char) * j);
// 				if (tab[j] == NULL)
// 					return (ft_free_malloc(tab, j));
// 			}
// 		}
// 		i++;
// 		j = 0;
// 	}
// 	return (tab);
// }

// int **ft_split(char const **s, char c)
// {
// 	int		**tab;
// 	int		taille;

// 	if (s == NULL)
// 		return (NULL);
// 	taille = ft_alloc_nb_col(s, c);
// 	if (!*s)
// 	{
// 		tab = malloc(sizeof(char *) * 1);
// 		if (tab == NULL)
// 			return (NULL);
// 		tab[0] = 0;
// 		return (tab);
// 	}
// 	tab = malloc(sizeof(int *) * taille);
// 	if (tab == NULL)
// 		return (0);
// 	tab = ft_alloc_totale(s, c, tab);
// 	if (tab == NULL)
// 		return (0);
// 	tab = ft_placement_mots(s, c, tab);
// 	return (tab);
// }

int main(int argc, char **argv)
{
	(void) argc;
	int taille = ft_nb_col(argv);
	ft_printf("Voici le nombre d'elements %d\n", taille);
	return (0);
}
