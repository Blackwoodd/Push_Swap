/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:36:23 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:35:21 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	verif_order(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size - 1)
	{
		if (data->tab[i] > data->tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	verif_flag(t_data *data)
{
	int	i;
	int	verif;

	i = 1;
	verif = 0;
	while (verif != data->size - 1)
	{
		if (i == verif)
			i++;
		if (data->tab[verif] == data->tab[i])
		{
			write (1, "Error\n", 6);
			return (1);
		}
		i++;
		if (i == data->size)
		{	
			verif++;
			i = 0;
		}
	}
	if (verif_order(data) == 1)
		return (1);
	return (0);
}

int	verif_sign_word(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i != argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (((argv[i][j] == '-' || argv[i][j] == '+')
				&& (argv[i][j + 1] == '-' || argv[i][j + 1] == '+'))
				|| ((argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				|| (argv[i][j] >= 'a' && argv[i][j] <= 'z')))
			{
				write (1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
