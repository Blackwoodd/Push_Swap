/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:40:40 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/13 14:40:43 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra_rr(t_data*data)
{
	int	i;

	i = data->a;
	while (i < data->size - 1)
	{
		data->tab[i] ^= data->tab[i + 1];
		data->tab[i + 1] ^= data->tab[i];
		data->tab[i] ^= data->tab[i + 1];
		i++;
	}
}

void	rb_rr(t_data *data)
{
	int	i;

	i = data->a - 1;
	while (i > 0)
	{
		data->tab[i] ^= data->tab[i - 1];
		data->tab[i - 1] ^= data->tab[i];
		data->tab[i] ^= data->tab[i - 1];
		i--;
	}
}

void	rrb_rrr(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->a - 1)
	{
		data->tab[i] ^= data->tab[i + 1];
		data->tab[i + 1] ^= data->tab[i];
		data->tab[i] ^= data->tab[i + 1];
		i++;
	}
}

void	rra_rrr(t_data *data)
{
	int	i;

	i = data->size - 1;
	while (i > data->a)
	{
		data->tab[i] ^= data->tab[i - 1];
		data->tab[i - 1] ^= data->tab[i];
		data->tab[i] ^= data->tab[i - 1];
		i--;
	}
}
