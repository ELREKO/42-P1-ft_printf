/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:49:57 by rkost             #+#    #+#             */
/*   Updated: 2023/06/19 08:41:07 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *arg)
{
	int					len;
	unsigned long long	ptr_value;

	ptr_value = (unsigned long long)arg;
	if (!arg)
		return (ft_printf_string("(nil)"));
	write(1, "0x", 2);
	len = write_out_nbr(ptr_value, "0123456789abcdef");
	return (len + 2);
}
