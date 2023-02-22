/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listes_chainees.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haze <haze@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:56:39 by mthea             #+#    #+#             */
/*   Updated: 2023/02/21 14:07:13 by haze             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_includes/ft_push_swap.h"

#include<stdlib.h>
#include<stdio.h>

    typedef struct slist
        {
                int valeur;
                struct slist *suiv;
        } slist ;

/******************************************************************************/

void Insert(slist **sl, int Val)
{
        slist *tmp = NULL;
        slist *csl = *sl;
        slist *elem = malloc(sizeof(slist));
        if(!elem) exit(EXIT_FAILURE);
        elem->valeur = Val;
        while(csl && csl->valeur < Val)
          {
             tmp = csl;
             csl = csl->suiv;
          }
        elem->suiv = csl;
        if(tmp) tmp->suiv = elem;
        else *sl = elem;
        ft_printf("sa\n");
}
/******************************************************************************/

int Pop(slist **sl)
{
        int Val;
        slist *tmp;
        if(!*sl) return -1;     
        tmp = (*sl)->suiv;
        Val = (*sl)->valeur;
        free(*sl);
        *sl = tmp;             
        return Val;            
}

/******************************************************************************/

void Clear(slist **sl)
{
        slist *tmp;
        while(*sl)
          {
             tmp = (*sl)->suiv;
             free(*sl);
             *sl = tmp;
          }
}
/******************************************************************************/

int Length(slist *sl)
{
        int n=0;
        while(sl)
          {
              n++;
              sl = sl->suiv;
          }
        return n;
}

/******************************************************************************/

void View(slist *sl)
{
       while(sl)
          {
             printf("%d\n",sl->valeur);
             sl = sl->suiv;
          }
}

int main()
{
        slist *Mysl = NULL;

        Insert(&Mysl,12);
        Insert(&Mysl,8);
        Insert(&Mysl,3);
        Insert(&Mysl,5);
        Insert(&Mysl,9);
        Insert(&Mysl,-5);
        Insert(&Mysl,-2);
        Insert(&Mysl,7);
        printf("Nb d'elements : %d\n",Length(Mysl));
        View(Mysl);

        puts("Retrait de deux elements :");
        printf("%d\n",Pop(&Mysl));
        printf("%d\n",Pop(&Mysl));
        printf("Nb d'elements : %d\n",Length(Mysl));
        View(Mysl);

        puts("Vidage de la liste puis ajout de 3 elements :");
        Clear(&Mysl);
        Insert(&Mysl,3);
        Insert(&Mysl,9);
        Insert(&Mysl,5);
        printf("Nb d'elements : %d\n",Length(Mysl));
        View(Mysl);

        Clear(&Mysl);

#ifdef _WIN32
        system("PAUSE");  /* Pour la console Windows. */
#endif
        return 0;
}