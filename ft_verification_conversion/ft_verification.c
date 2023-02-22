/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verification.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:25:02 by haze              #+#    #+#             */
/*   Updated: 2023/02/22 13:02:39 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

int verif_if_is_number(char **tab)
{
	int i;
	int	j;

	i = 1;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] == 45 && (tab[i][j + 1] > 47 && tab[i][j + 1] < 58) && j == 0)
				j++;
			if (tab[i][j] == 43 && (tab[i][j + 1] > 47 && tab[i][j + 1] < 58) && j == 0)
				j++;
			if (tab[i][j] < 48 || tab[i][j] > 57)
				return (0);
			else
				j++;
		}
		j = 0;
		i++;	
	}
	return (1);
}

int	ft_atoi(char *thestring)
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

int verif_if_is_int(char **tab)
{
	int i;
	int	j;
	long long valeur;

	valeur = 0;
	i = 1;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			valeur = ft_atoi(tab[i]);
			j++;
		}
		ft_printf("%lld  \n", valeur);
		if (valeur > 2147483647 || valeur < -2147483647 - 1)
			return (0);
		valeur = 0;
		j = 0;
		i++;	
	}
	return (1);
}

int main(int argc, char **argv)
{
	(void) argc;
	ft_printf("%d", verif_if_is_int(argv));

	return (0);
}

