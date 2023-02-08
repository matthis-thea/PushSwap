/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:25:02 by haze              #+#    #+#             */
/*   Updated: 2023/02/08 11:05:38 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

// int verification_doublon(int *tab, int argc)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 1;
// 	while (i < argc)
// 	{
// 		while (j < argc)
// 		{
// 			if (tab[j] == tab[i])
// 			{
// 				return (0);
// 			}
// 			j++;
// 		}
// 		i++;
// 		j = i + 1;
// 	}
// 	return (1);
// }

// int verification_int(int *tab, int argc)
// {
// 	int	i;

// 	i = 0;
// 	while (tab[i] < argc)
// 	{
// 		if (tab[i] < -2147483647 - 1)
// 			return (0);
// 		if (tab[i] > 2147483647)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int verification_nombre(int *tab, int argc)
// {
// 	int	i;

// 	i = 0;
// 	while (i < argc)
// 	{
// 		if (tab[i] <= 47 && tab[i] >= 58)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// int verification_totale(int *tab, int argc)
// {
// 	if (verification_doublon(tab, argc) == 0)
// 	{
// 		ft_printf("Error\n");
// 		return (0);
// 	}
// 	if (verification_nombre(tab, argc) == 0)
// 	{
// 		ft_printf("Error\n");
// 		return (0);
// 	}
// 	if (verification_int(tab, argc) == 0)
// 	{
// 		ft_printf("Error\n");
// 		return (0);
// 	}
// 	return (1);
// }

// int *conversion_char_int(char *argv, int *tab)
// {
// 	int	i;

// 	i = 0;
// 	while (argv[i])
// 	{
// 		tab[i] = 1;
// 		i++;
// 	}
// 	return (tab);
// }

// int	ft_strlen(char **str)
// {
// 	int	i;
// 	int j;

// 	j = 0;
// 	i = 0;
// 	if (!str)
// 		return (0);
// 	while (str[i])
// 	{
// 		if (str[i] == 32)
// 			j++;
// 		i++;
// 	}
// 	return (i - j);
// }

// int main(int argc, char **argv)
// {
// 	(void) argc;
// 	int taille = ft_strlen(argv);
// 	ft_printf("La valeur de taille est :%d\n", taille);
// 	int *tab = NULL;
// 	int i = 0;
// 	tab = malloc(sizeof(int) * taille);
// 	if (!tab)
// 	{
// 		ft_printf("Erreur d'allocation dynamique\n");
// 		return (0);
// 	}
// 	tab = conversion_char_int(argv[1], tab);
// 	while (i < taille)
// 	{
// 		ft_printf("tab[%d] = %d\n", i, tab[i]);
// 		i++;
// 	}
// 	ft_printf("Le tableau a une taille de %d\n", i);
// 	return (0);
// }
