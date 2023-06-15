/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkost <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:14:46 by rkost             #+#    #+#             */
/*   Updated: 2023/06/15 13:39:52 by rkost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	ft_flagcheck(size_t ui_count, const char *str_give, va_list ap)
{
	int	len;

	if (str_give[ui_count] == 'c')
		len = ft_printf_char(va_arg(ap, int));
	if (str_give[ui_count] == 's')
		len = ft_printf_string(va_arg(ap, char *));
	if (str_give[ui_count] == 'p')
		len = ft_printf_ptr(va_arg(ap, void *));
	if (str_give[ui_count] == 'd')
		len = ft_printf_int(va_arg(ap, int));
	if (str_give[ui_count] == 'i')
		len = ft_printf_int(va_arg(ap, int));
	if (str_give[ui_count] == 'u')
		len = ft_printf_uns_int(va_arg(ap, unsigned int));
	if (str_give[ui_count] == 'x')
		len = ft_printf_hex(va_arg(ap, unsigned int), 'x');
	if (str_give[ui_count] == 'X')
		len = ft_printf_hex(va_arg(ap, unsigned int), 'X');
	if (str_give[ui_count] == '%')
	{
		len = 1;
		write(1, "%", 1);
	}
	return (len);
}

static int	ft_write(const char *str_give, va_list ap)
{
	size_t	ui_count;
	size_t	i_check_flags;
	int		len;

	ui_count = 0;
	len = 0;
	while (str_give[ui_count] != '\0')
	{
		if (str_give[ui_count] == '%')
		{
			ui_count++;
			i_check_flags = 0;
			while (i_check_flags < ft_strlen("cspdiuxX%"))
			{
				if (str_give[ui_count] == "cspdiuxX%"[i_check_flags++])
					len = len + ft_flagcheck(ui_count, str_give, ap);
			}
			ui_count++;
		}
		write(1, &str_give[ui_count++], 1);
	}
	return (ui_count + len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	char	*str_give;
	int		len;

	str_give = ft_strdup(format);
	va_start(ap, format);
	len = ft_write(str_give, ap);
	va_end(ap);
	free(str_give);
	return (len);
}
