/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:59:29 by nbechon           #+#    #+#             */
/*   Updated: 2023/03/28 16:59:30 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../get_next_line/get_next_line.h"
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
int     ft_atoi(const char *str);
void	rotate(char *str, t_data *data);
void	swap(t_data *data);
void	rotate_ab(t_data *data);
void	rotate_b(t_data *data);
void	rotate_a(t_data *data);
void	revers_rra(t_data *data);
void	revers_rrb(t_data *data);
void	revers_rrr(t_data *data);
void	revers(char *str, t_data *data);
void	push_pa(t_data *data);
void	push(char *str, t_data *data);
void	push_pb(t_data *data);
void	commande(t_data *data, int c, int v);
void	execute_2(t_data *data, int c, int v);
void	ft_execute(t_data *data);
void	ft_remise_en_place(t_data *data);
void	exit_free(t_data *data);
void	exit_free2(t_data *data);
void	free_tab(t_data *data);
int	    verif_flag(t_data *data);
int	    verif_order(int argc, char *argv[]);
int	    verif_sign_word(int argc, char *argv[]);
void	checker(t_data *data);
void	its_ok_or_not(t_data *data);
int	    verif_checker(t_data *data);
int	    isstr(char *str, char *c);
void	init_and_verif(t_data *data, int argc);
void	espace(int argc, t_data *data);
void	rb_rr(t_data *data);
void	ra_rr(t_data *data);
void	rra_rrr(t_data *data);
void	rrb_rrr(t_data *data);

#endif