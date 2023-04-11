/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:54:02 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 13:22:33 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrr(t_data *data)
{
	rrb_rrr(data);
	rra_rrr(data);
	write (1, "rrr\n", 4);
}

void	rr(t_data *data)
{
	rb_rr(data);
	ra_rr(data);
	write (1, "rr\n", 3);
}

void	pb(t_data *data)
{
	write (1, "pb\n", 3);
	data->a++;
}

void	pa(t_data *data)
{
	write (1, "pa\n", 3);
	data->a--;
}

void	sb(t_data *data)
{
	int	i;

	i = data->a - 1;
	data->tab[i] ^= data->tab[i - 1];
	data->tab[i - 1] ^= data->tab[i];
	data->tab[i] ^= data->tab[i - 1];
	write (1, "sb\n", 3);
}
