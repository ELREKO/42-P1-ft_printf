/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:14:43 by rkost             #+#    #+#             */
/*   Updated: 2023/06/15 15:19:26 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>


# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	*ft_memchr_cp(const void *str, int ch, size_t size_cmp);
size_t	ft_strlen_cp(const char *str);
int		ft_printf_char(int arg);
int		ft_printf_string(char *arg);
int     ft_printf_ptr(void *arg);
int		write_out_nbr(unsigned long long arg, char *base);
int		ft_printf_int(int arg);
int		ft_printf_uns_int(unsigned int arg);
int		ft_printf_hex(unsigned int arg, char form);
#endif
