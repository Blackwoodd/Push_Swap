/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:02:30 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:34:36 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	espace(int argc, t_data *data)
{
	data->tab = malloc(sizeof(int) * argc - 1);
	if (data->tab == NULL)
		free_tab(data);
}

void	sorting_plus_3(t_data *data, int *tab)
{
	while (data->a != data->size - 3)
		quick_sort(data, tab);
	ft_sorting6(data);
	while (data->a)
	{
		ft_meilleur_solution(data);
		ft_execute(data);
	}
	ft_remise_en_place(data);
}

void	sorting2et3(t_data *data)
{
	if (data->size == 2)
		if (data->tab[0] > data->tab[1])
			sa(data);
	if (data->size == 3)
		ft_sorting3(data);
}

void	init_and_verif(t_data *data, int argc)
{
	data->size = argc - 1;
	data->tab = NULL;
	data->a = 0;
	if (argc <= 2)
		exit (0);
	espace(argc, data);
}

int	main(int argc, char *argv[])
{
	t_data	data;
	int		i;
	int		*tab;

	i = 0;
	init_and_verif(&data, argc);
	tab = malloc(sizeof(int) * argc - 1);
	if (tab == NULL)
		exit_free(&data, tab);
	while (argv[i + 1])
	{
		data.tab[i] = ft_atoi(argv[i + 1]);
		tab[i] = ft_atoi(argv[i + 1]);
		if (!(ft_atoi_max(argv[i + 1]) >= INT_MIN
				&& ft_atoi_max(argv[i + 1]) <= INT_MAX))
			exit_free2(&data, tab);
		i++;
	}
	if (verif_sign_word(argc, argv) == 1 || verif_flag(&data) == 1)
		exit_free(&data, tab);
	sorting2et3(&data);
	if (data.size > 3)
		sorting_plus_3(&data, tab);
	exit_free(&data, tab);
	return (0);
}
