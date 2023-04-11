/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_BONUS.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:02:30 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:21:57 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	espace(int argc, t_data *data)
{
	data->tab = malloc(sizeof(int) * argc - 1);
	if (data->tab == NULL)
		free_tab(data);
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

int	isstr(char *str, char *c)
{
	int	i;

	i = 0;
	while (str[i] && c[i])
	{
		if (str[i] != c[i])
			return (0);
		i++;
	}
	return (1);
}

int	verif_checker(t_data *data)
{
	int	i;

	i = 0;
	while (i != data->size - 1)
	{
		if (data->tab[i] > data->tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_data	data;
	int		i;

	i = 0;
	init_and_verif(&data, argc);
	while (argv[i + 1])
	{
		data.tab[i] = ft_atoi(argv[i + 1]);
		if (!(ft_atoi_max(argv[i + 1]) >= INT_MIN
				&& ft_atoi_max(argv[i + 1]) <= INT_MAX))
			exit_free2(&data);
		i++;
	}
	if (verif_sign_word(argc, argv) == 1 || verif_flag(&data) == 1)
		exit_free(&data);
	checker(&data);
	exit_free(&data);
	return (0);
}
