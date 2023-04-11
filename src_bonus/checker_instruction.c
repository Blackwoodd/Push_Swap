/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:11:17 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/28 13:11:19 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	rotate_a(t_data *data)
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

void	rotate_b(t_data *data)
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

void	rotate_ab(t_data *data)
{
	rotate_b(data);
	rotate_a(data);
}

void	swap(t_data *data)
{
	int	i;

	i = data->a;
	data->tab[i] ^= data->tab[i + 1];
	data->tab[i + 1] ^= data->tab[i];
	data->tab[i] ^= data->tab[i + 1];
}

void	rotate(char *str, t_data *data)
{
	if (isstr(str, "ra\n"))
		rotate_a(data);
	else if (isstr(str, "rb\n"))
		rotate_b(data);
	else if (isstr(str, "rr\n"))
		rotate_ab(data);
}	
