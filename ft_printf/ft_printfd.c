/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:57:39 by nbechon           #+#    #+#             */
/*   Updated: 2022/11/28 11:36:40 by nbechon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printer_d(int nb)
{
	int	len;

	len = 0;
	ft_putnbr_int(nb, &len);
	return (len);
}
