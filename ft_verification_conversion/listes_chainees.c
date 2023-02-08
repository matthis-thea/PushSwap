/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listes_chainees.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthea <mthea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:56:39 by mthea             #+#    #+#             */
/*   Updated: 2023/02/08 16:33:22 by mthea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

typedef struct element
{
    int val;
    struct element *suivant;
}               element;

typedef element* llist;
int main(void)
{
    llist ma_liste1 = NULL;
    element *ma_liste2 = NULL;
    struct element *ma_liste3 = NULL;
}