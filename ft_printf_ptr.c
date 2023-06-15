/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:49:57 by rkost             #+#    #+#             */
/*   Updated: 2023/06/15 13:53:05 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *arg)
{
	uintptr_t	ptr_value;
	int			leading_zeros;
	int			hex_digits;
	int			count;
	char		hex_digit;

	ptr_value = (uintptr_t)arg;
	write(1, "0x", 2);
	leading_zeros = 1;
	hex_digits = sizeof(void *) * 2;
	count = (hex_digits - 1) * 4;
	while (count >= 0)
	{
		hex_digit = "0123456789abcdef"[(ptr_value >> count) & 0xf];
		if (hex_digit != '0' || !leading_zeros)
		{
			leading_zeros = 0;
			write(1, &hex_digit, 1);
		}
		count -= 4;
	}
	return (0);
}
