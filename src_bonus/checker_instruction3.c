/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_instruction3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:34:56 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/28 13:34:58 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	push_pa(t_data *data)
{
	data->a--;
}

void	push_pb(t_data *data)
{
	data->a++;
}

void	push(char *str, t_data *data)
{
	if (isstr(str, "pa\n"))
		push_pa(data);
	else if (isstr(str, "pb\n"))
		push_pb(data);
}
