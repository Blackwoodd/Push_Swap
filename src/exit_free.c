/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:59:50 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:23:39 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	exit_free(t_data *data, int *tab)
{
	free(data->tab);
	free(tab);
	exit (0);
}

void	exit_free2(t_data *data, int *tab)
{
	write (1, "Error\n", 6);
	free(data->tab);
	free(tab);
	exit (0);
}

void	free_tab(t_data *data)
{
	free(data->tab);
	exit (0);
}
