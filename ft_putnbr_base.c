/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:20:26 by rkost             #+#    #+#             */
/*   Updated: 2023/06/15 15:28:52 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_nummer(long long arg, int base)
{
	int	count;

	count = 0;
	//printf("\nI am in Count arg: %lld \n", arg);
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
	char	ch;
	int		len;
	unsigned int		base_len;

	base_len = ft_strlen(base);
	len = count_nummer(arg, base_len);
	//printf("\nbase_len: %d\n", base_len);
	while (arg > base_len)
	{
		write_out_nbr(arg / base_len, base); //printf("\n");
		arg = arg - ((arg / base_len) * base_len);
	}
	if (arg == base_len)
	{
		ch = base[arg / base_len];
		write(1, &ch, 1);
		ch = base[arg % base_len];
		write(1, &ch, 1);
	}
	if (arg < base_len)
	{
		ch = base[arg];
		write(1, &ch, 1);
	}
	return (len);
}
