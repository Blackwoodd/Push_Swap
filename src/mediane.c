/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:01:57 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/08 16:02:01 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	triage_sous_mediane(t_data *data)
{
	int	i;

	i = data->a;
	while (i < data->size)
	{
		if (data->tab[data->a] < data->mediane)
		{
			if (data->a == data->size - 3)
				break ;
			pb(data);
			if (data->tab[data->a - 1] < data->mediane / 2
				&& data->tab[data->a] > data->mediane && data->size > 150)
				rr(data);
			if (data->tab[data->a - 1] < (data->mediane / 2))
				rb(data);
		}
		else
			ra(data);
		i++;
	}
}
