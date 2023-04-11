/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   meilleur_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:06:45 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/14 14:06:47 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	position(t_data *data)
{
	if (data->pos >= data->a / 2)
	{
		while (data->tab[data->pos] != data->tab[data->a - 1])
		{
			data->pos++;
			data->mouv++;
		}
	}
	else
	{
		while (data->tab[data->pos] != data->tab[0])
		{
			data->pos--;
			data->mouv++;
		}
		data->mouv++;
	}
}

int	contage(t_data *data, int i)
{
	int	c;
	int	test;

	c = 0;
	test = data->size - 1;
	while (data->tab[i] < data->tab[test] && data->tab[test] != data->max)
	{
		test--;
		c++;
		data->mouv++;
	}
	return (c);
}

void	for_c_up(t_data *data, int i, int save)
{
	int	test;

	test = data->size - 1;
	data->mouv = save;
	while (data->tab[test] != data->max)
	{
		test--;
		data->mouv++;
	}
	while (data->tab[i] < data->tab[test])
	{
		test--;
		data->mouv++;
	}
}

void	ft_meilleur_solution(t_data *data)
{
	int	c;
	int	i;
	int	minimum;
	int	save;

	save = 0;
	i = data->a - 1;
	minimum = INT_MAX;
	while (i != -1)
	{
		data->mouv = 0;
		data->pos = i;
		position(data);
		save = data->mouv;
		c = contage(data, i);
		if (c > ((data->size - 1) - data->a) / 2)
			for_c_up(data, i, save);
		if (data->mouv < minimum)
		{
			minimum = data->mouv;
			data->index = i;
		}
		i--;
	}
}
