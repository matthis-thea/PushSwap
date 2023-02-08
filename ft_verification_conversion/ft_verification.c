/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verification.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:25:02 by haze              #+#    #+#             */
/*   Updated: 2023/02/08 13:37:20 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

int	verification_doublon(long long int *tab, int taille)
{
	long long int	i;
	long long int	j;

	j = 1;
	i = 0;
	while (i < taille)
	{
		while (j < taille)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	verification_int(long long int *tab, int taille)
{
	long long int	i;

	i = 0;
	while (i < taille)
	{
		if (tab[i] < -2147483647 - 1)
			return (0);
		if (tab[i] > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

int	verification_nombre(char **tab)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] < '/' && tab[i][j] > ':')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	verification_totale(long long *tab, int taille)
{
	if (verification_doublon(tab, taille) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (verification_int(tab, taille) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	return (1);
}
