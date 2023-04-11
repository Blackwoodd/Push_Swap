/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:01:41 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/08 16:01:46 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	mediane(t_data *data, int conteur, int *tab)
{
	data->max = tab[data->size - 1];
	conteur -= data->a;
	if (conteur % 2 == 0)
		data->mediane = tab[data->a + (conteur / 2) - 1];
	if (conteur % 2 != 0)
		data->mediane = tab[data->a + (conteur / 2)];
}

void	verif(int conteur, int *tab, int j)
{
	if (tab[conteur] > tab[j])
	{
		tab[conteur] ^= tab[j];
		tab[j] ^= tab[conteur];
		tab[conteur] ^= tab[j];
	}
}

int	boucle(t_data *data, int i, int min, int *tab)
{
	int	j;

	j = 0;
	while (i != data->size)
	{
		if (tab[i] <= min)
		{
			min = tab[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	quick_sort(t_data *data, int *tab)
{
	int	min;
	int	i;
	int	j;
	int	conteur;

	conteur = data->a;
	i = data->a;
	while (conteur != data->size)
	{
		min = tab[i];
		j = boucle (data, i, min, tab);
		verif(conteur, tab, j);
		conteur++;
		i = conteur;
	}
	mediane(data, conteur, tab);
	triage_sous_mediane(data);
}
