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

int	ft_printf_ptr(unsigned long arg)
{
	int len;
	//unsigned long ptr_value;
	//ptr_value = (unsigned long) arg;
	write(1, "0x", 2);
	len = write_out_nbr(arg, "0123456789abcdef");
	return (len + 2);	
}