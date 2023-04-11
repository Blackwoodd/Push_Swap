/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:03:38 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/16 16:34:32 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_data
{
	int	*tab;
	int	a;
	int	size;
	int	mediane;
	int	max;
	int	index;
	int	chiffre;
	int	pos;
	int	mouv;
}		t_data;

long	ft_atoi_max(const char *str);

void	exit_free(t_data *data, int *tab);

void	execute_2(t_data *data, int c, int v);

void	commande(t_data *data, int c, int v);

void	for_c_up(t_data *data, int i, int save);

void	position(t_data *data);

void	ft_remise_en_place(t_data *data);

void	ft_execute(t_data *data);

void	sb(t_data *data);

void	quick_sort_cent(t_data *data, int *tab);

void	ft_sorting6(t_data *data);

void	ft_sorting5(t_data *data);

void	ft_sorting4(t_data *data);

void	ft_sorting3(t_data *data);

void	ft_meilleur_solution(t_data *data);

void	pb(t_data *data);

void	pa(t_data *data);

void	rr(t_data *data);

void	rb_rr(t_data *data);

void	ra_rr(t_data *data);

void	rrb_rrr(t_data *data);

void	rra_rrr(t_data *data);

void	rrr(t_data *data);

void	triage_sous_mediane(t_data *data);

void	quick_sort(t_data *data, int *tab);

void	suite_triage5(t_data *data, int j);

void	suite_triage4(t_data *data, int j);

void	triage4(t_data *data, int argc);

void	sa(t_data *data);

void	ra(t_data *data);

void	rra(t_data *data);

void	rb(t_data *data);

void	rrb(t_data *data);

void	triage5(t_data *data);

int		verif_flag(t_data *data);

int		ft_atoi(const char *str);

int		contage(t_data *data, int i);

int		verif_sign_word(int argc, char *argv[]);

void	free_tab(t_data *data);

void	exit_free2(t_data *data, int *tab);

#endif
