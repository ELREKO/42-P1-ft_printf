/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:44:49 by rkost             #+#    #+#             */
/*   Updated: 2023/06/15 13:47:33 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_uns_int(unsigned int arg)
{
	int		len;
	char	*base;

	base = "0123456789";
	len = write_out_nbr(arg, base);
	return (len);
}

int	ft_printf_int(int arg)
{
	int		len;
	char	*base;

	base = "0123456789";
	if (arg == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (arg < 0)
	{
		arg *= -1;
		write(1, "-", 1);
		len = 1 + write_out_nbr(arg, base);
	}
	else
		len = 0 + write_out_nbr(arg, base);
	return (len);
}
