/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:43:48 by haze              #+#    #+#             */
/*   Updated: 2023/02/08 13:52:35 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

long long int	ft_atoi(const char *thestring)
{
	long long int	i;
	long long int	valeur;
	int				moins;

	i = 0;
	valeur = 0;
	moins = 0;
	while ((thestring[i] >= 9 && thestring[i] <= 13) || thestring[i] == 32)
		i++;
	if (thestring[i] == 43 || thestring[i] == 45)
	{
		if (thestring[i] == 45)
			moins++;
		i++;
	}
	while (thestring[i] && (thestring[i] >= 48 && thestring[i] <= 57))
	{
		valeur = ((valeur * 10) + (thestring[i] - 48));
		i++;
	}
	if (moins)
		valeur = -valeur;
	if (!(thestring[i] >= 48 && thestring[i] <= 57) && valeur == 0)
		return (0);
	return (valeur);
}

int	**ft_free_malloc(long long int **tab, int pos)
{
	long long int	i;

	i = 0;
	while (i < pos)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

long long int	ft_nb_col(char **s)
{
	int	i;

	i = 1;
	while (s[i])
	{
		i++;
	}
	return (i - 1);
}

long long int	*ft_placement_nb(char **s, long long int *tab)
{
	int		i;
	int		z;

	z = 0;
	i = 1;
	while (s[i])
	{
		tab[z] = ft_atoi(s[i]);
		z++;
		i++;
	}
	return (tab);
}

long long int	*ft_split(char **s)
{
	long long int		*tab;
	long long int		taille;
	int					verification;

	verification = verification_nombre(s);
	if (verification == 0)
		return (0);
	taille = ft_nb_col(s);
	tab = malloc(sizeof(int) * taille);
	if (tab == NULL)
		return (0);
	tab = ft_placement_nb(s, tab);
	return (tab);
}

int main(int argc, char **argv)
{
	(void) argc;
	int taille = ft_nb_col(argv);
	long long int *tab = NULL;
	tab = ft_split(argv);
	if (!tab)
		ft_printf("Error\n");
	int verif = verification_totale(tab, taille);
	if (verif == 0)
	{
		free(tab);
		return (0);
	}
	int i = 0;
	while (i < taille)
	{
		ft_printf("tab[%d] : %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
