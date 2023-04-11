/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:11:32 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:24:16 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sorting3(t_data *data)
{
	if (data->tab[0] > data->tab[1] && data->tab[0] > data->tab[2])
		ra(data);
	if (data->tab[1] > data->tab[0] && data->tab[1] > data->tab[2])
		rra(data);
	if (data->tab[0] > data->tab[1])
		sa(data);
}

void	ft_sorting4(t_data *data)
{
	triage4(data, data->size);
	if (data->tab[1] > data->tab[2] && data->tab[1] > data->tab[3])
		ra(data);
	if (data->tab[2] > data->tab[1] && data->tab[2] > data->tab[3])
		rra(data);
	if (data->tab[1] > data->tab[2])
		sa(data);
	write (1, "pa\n", 3);
}

void	ft_sorting5(t_data *data)
{
	triage5(data);
	triage5(data);
	if (data->tab[2] > data->tab[3] && data->tab[2] > data->tab[4])
		ra(data);
	if (data->tab[3] > data->tab[2] && data->tab[3] > data->tab[4])
		rra(data);
	if (data->tab[2] > data->tab[3])
		sa(data);
	write (1, "pa\n", 3);
	write (1, "pa\n", 3);
}

void	ft_sorting6(t_data *data)
{
	if (data->tab[data->size - 3] > data->tab[data->size - 2]
		&& data->tab[data->size - 3] > data->tab[data->size - 1])
		ra(data);
	if (data->tab[data->size - 2] > data->tab[data->size - 3]
		&& data->tab[data->size - 2] > data->tab[data->size - 1])
		rra(data);
	if (data->tab[data->size - 3] > data->tab[data->size - 2])
		sa(data);
}
