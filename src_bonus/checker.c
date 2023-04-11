/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:14:10 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:41:44 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	its_ok_or_not(t_data *data)
{
	if (verif_checker(data) && data->a == 0)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}

static void	ft_compatibiliter(char *str, t_data *data)
{
	str = get_next_line(0);
	if (!str)
		return ;
	else
	{
		if (isstr(str, "sa\n"))
			swap(data);
		else if (isstr(str, "ra\n") || isstr(str, "rb\n") || isstr(str, "rr\n"))
			rotate(str, data);
		else if (isstr(str, "rra\n") || isstr(str, "rrb\n") || isstr(str, "rrr\n"))
			revers(str, data);
		else if (isstr(str, "pa\n") || isstr(str, "pb\n"))
			push(str, data);
		else
		{
			free(str);
			exit_free2(data);
		}
	}
	free(str);
	ft_compatibiliter(str, data);
}

void	checker(t_data *data)
{
	char	*str;

	str = NULL;
	ft_compatibiliter(str, data);
	its_ok_or_not(data);
}
