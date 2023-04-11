/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_instruction2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:31:29 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/28 13:31:33 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	revers_rra(t_data *data)
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

void	revers_rrb(t_data *data)
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

void	revers_rrr(t_data *data)
{
	revers_rrb(data);
	revers_rra(data);
}

void	revers(char *str, t_data *data)
{
	if (isstr(str, "rra\n"))
		revers_rra(data);
	else if (isstr(str, "rrb\n"))
		revers_rrb(data);
	else if (isstr(str, "rrr\n"))
		revers_rrr(data);
}
