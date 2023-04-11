/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:54:02 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/20 16:54:06 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	commande(t_data *data, int c, int v)
{
	while (c-- > 0)
		rotate_b(data);
	while (v-- > 0)
		revers_rrb(data);
	while (data->tab[data->index] > data->tab[data->a])
		rotate_a(data);
	while (data->tab[data->a - 1] < data->tab[data->size - 1]
		&& data->tab[data->size - 1] != data->max)
		revers_rra(data);
}

void	execute_2(t_data *data, int c, int v)
{
	int	position;
	int	test;

	position = 0;
	test = data->a;
	while (data->tab[data->index] > data->tab[test])
	{
		test++;
		position++;
	}
	while (data->tab[data->index] > data->tab[data->a] && v-- > 0)
	{	
		revers_rrr(data);
		if (data->index == 0)
			data->index = data->a - 1;
		else
			data->index--;
	}
	while (data->tab[data->index] > data->tab[data->a] && c-- > 0)
	{
		rotate_ab(data);
		data->index++;
	}
	commande(data, c, v);
	push_pa(data);
}

void	ft_execute(t_data *data)
{
	int	c;
	int	v;
	int	tmp;

	tmp = data->index;
	v = 0;
	c = 0;
	if (data->index < data->a / 2)
	{
		while (tmp != 0)
		{
			tmp--;
			v++;
		}
		v++;
	}
	else if (data->index >= data->a / 2)
	{
		while (tmp != data->a - 1)
		{
			c++;
			tmp++;
		}
	}
	execute_2(data, c, v);
}

void	ft_remise_en_place(t_data *data)
{
	int	i;
	int	test;

	i = 0;
	test = 0;
	while (data->tab[test] < data->max)
	{
		if (data->tab[test + 1] == data->max)
			i = test;
		test++;
	}
	if (i >= (data->size - 1) / 2)
		while (data->tab[data->size - 1] != data->max)
			revers_rra(data);
	else
		while (data->tab[data->size - 1] != data->max)
			rotate_a(data);
}
