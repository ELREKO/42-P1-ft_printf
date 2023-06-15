/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:40:42 by rkost             #+#    #+#             */
/*   Updated: 2023/06/15 13:42:15 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int arg, char form)
{
	int		len;
	char	*base;

	if (form == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len = write_out_nbr(arg, base);
	return (len);
}
