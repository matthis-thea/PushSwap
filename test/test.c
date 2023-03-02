#include <stdlib.h>
#include <stdio.h>
typedef struct s_swap
{
		int 	max;
		int		*stack_a;
		int 	*stack_temp;
		int		*stack_b;
}				t_swap;

int			allocation_all_tab(t_swap *s)
{
	s->stack_a = malloc(sizeof(long long int) * s->max);
	if (!s->stack_a)
		return (0);
	s->stack_temp = malloc(sizeof(long long int) * s->max);
	if (!s->stack_temp)
	{
		free(s->stack_a);
		return (0);
	}
	s->stack_b = malloc(sizeof(long long int) * s->max);
	if (!s->stack_b)
	{
		free(s->stack_a);
		free(s->stack_temp);
		return (0);
	}
	return (1);
}

t_swap			*allocation_tab(t_swap *s, int taille, char **argv)
{
	int i;
	int j;
	int verif;

	verif = 0;
	j = 0;
	i = 1;
	s = malloc(sizeof(t_swap));
	if (!s)
		return (0);
	s->max = taille;
	verif = allocation_all_tab(s);
	if (verif == 0)
		return (0);
	while (argv[i])
	{
		s->stack_a[j] = ft_atoi(argv[i]);
		s->stack_temp[j] = ft_atoi(argv[i]);
		s->stack_b[j] = -1;
		i++;
		j++;
	}
	return (s);
}


void ra(t_swap *s, int max)
{
	int i;

	i = 0;
	while (i < max)
	{
		s->stack_temp[i] = s->stack_a[i];
		i++;
	}
	i = 0;
	s->stack_a[i] = s->stack_a[max - 1];
	i++;
	while (i < max)
	{
		s->stack_a[i] = s->stack_a[i - 1];
		i++;
	}
	ft_printf("ra\n");
}

int main(int argc, char **argv)
{
	(void) argc;
	t_swap *s = NULL;

	int verif = 0;
	verif = verif_if_is_totale(argv, argc);
	if (verif == 0)
		return (0);
	s = allocation_tab(s, argc - 1, argv);
	if (!s)
	{
		ft_printf("Erreur\n");
		return (0);
	}
	sort_tab_temp(s);
	convert_stack_a(s);
}