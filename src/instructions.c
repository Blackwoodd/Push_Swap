/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:26:36 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 13:23:20 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_data *data)
{
	int	i;

	i = data->a;
	data->tab[i] ^= data->tab[i + 1];
	data->tab[i + 1] ^= data->tab[i];
	data->tab[i] ^= data->tab[i + 1];
	write (1, "sa\n", 3);
}

void	ra(t_data *data)
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
	write (1, "ra\n", 3);
}

void	rb(t_data *data)
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
	write (1, "rb\n", 3);
}

void	rra(t_data *data)
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
	write (1, "rra\n", 4);
}

void	rrb(t_data *data)
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
	write (1, "rrb\n", 4);
}
