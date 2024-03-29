/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:20:26 by rkost             #+#    #+#             */
/*   Updated: 2023/06/19 08:38:00 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_nbr(unsigned long long arg, unsigned long long base)
{
	int	count;

	count = 0;
	while (arg > base)
	{
		arg = arg / base;
		count++;
	}
	if (arg == base)
		count++;
	return (count + 1);
}

int	write_out_nbr(unsigned long long arg, char *base)
{
	char					ch;
	int						len;
	unsigned long long		base_len;

	base_len = ft_strlen(base);
	len = count_nbr(arg, base_len);
	while (arg >= base_len)
	{
		write_out_nbr(arg / base_len, base);
		arg = arg - ((arg / base_len) * base_len);
	}
	if (arg < base_len)
	{
		ch = base[arg];
		write(1, &ch, 1);
	}
	return (len);
}
