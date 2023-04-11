/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triage.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:11:41 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:24:46 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	suite_triage4(t_data *data, int j)
{
	if (j == 1)
		ra(data);
	if (j == 2)
	{
		ra(data);
		ra(data);
	}
	if (j == 3)
		rra(data);
	write (1, "pb\n", 3);
	data->a++;
}

void	triage_5_last(t_data *data, int j)
{
	if (j == 2)
		ra(data);
	if (j == 3)
	{
		ra(data);
		ra(data);
	}
	if (j == 4)
		rra(data);
	write (1, "pb\n", 3);
	data->a++;
}

void	suite_triage5(t_data *data, int j)
{
	if (data->a == 0)
	{
		if (j == 1)
			ra(data);
		if (j == 2)
		{
			ra(data);
			ra(data);
		}
		if (j == 3)
		{
			rra(data);
			rra(data);
		}
		if (j == 4)
			rra(data);
		write (1, "pb\n", 3);
		data->a++;
	}
	else if (data->a == 1)
		triage_5_last(data, j);
}

void	triage5(t_data *data)
{
	int	min;
	int	i;
	int	j;

	i = data->a;
	min = data->tab[i];
	j = 0;
	if (data->tab[0] < data->tab[1] && data->tab[1] < data->tab[2]
		&& data->tab[2] < data->tab[3] && data->tab[3] < data->tab[4])
		return ;
	while (i < data->size)
	{
		if (data->tab[i] <= min)
		{
			min = data->tab[i];
			j = i;
		}
		i++;
	}
	suite_triage5(data, j);
}

void	triage4(t_data *data, int argc)
{
	int	min;
	int	i;
	int	j;

	i = data->a;
	min = data->tab[i];
	j = 0;
	if (data->tab[0] < data->tab[1] && data->tab[1] < data->tab[2]
		&& data->tab[2] < data->tab[3])
		return ;
	while (i < argc - 1)
	{
		if (data->tab[i] <= min)
		{
			min = data->tab[i];
			j = i;
		}
		i++;
	}
	suite_triage4(data, j);
}
