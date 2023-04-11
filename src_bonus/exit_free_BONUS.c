/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free_BONUS.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <nbechon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:59:50 by nbechon           #+#    #+#             */
/*   Updated: 2023/04/11 14:26:28 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	exit_free(t_data *data)
{
	free(data->tab);
	exit (0);
}

void	exit_free2(t_data *data)
{
	write (1, "Error\n", 6);
	free(data->tab);
	exit (0);
}

void	free_tab(t_data *data)
{
	free(data->tab);
	exit (0);
}
