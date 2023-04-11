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

#include "../include/push_swap.h"

void	commande(t_data *data, int c, int v)
{
	while (c-- > 0)
		rb(data);
	while (v-- > 0)
		rrb(data);
	while (data->tab[data->index] > data->tab[data->a])
		ra(data);
	while (data->tab[data->a - 1] < data->tab[data->size - 1]
		&& data->tab[data->size - 1] != data->max)
		rra(data);
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
		rrr(data);
		if (data->index == 0)
			data->index = data->a - 1;
		else
			data->index--;
	}
	while (data->tab[data->index] > data->tab[data->a] && c-- > 0)
	{
		rr(data);
		data->index++;
	}
	commande(data, c, v);
	pa(data);
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
			rra(data);
	else
		while (data->tab[data->size - 1] != data->max)
			ra(data);
}
