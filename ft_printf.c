/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:30:25 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/29 14:06:08 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	print_str(char conversion, va_list arguments_to_convert)
{
	int	printed_char;

	printed_char = 0;
	if (conversion == 'c')
		printed_char = convert_c_char(arguments_to_convert);
	else if (conversion == 's')
		printed_char = convert_s_string(arguments_to_convert);
	else if (conversion == 'p')
		printed_char = convert_p_pointer_in_hex(arguments_to_convert);
	else if (conversion == 'd' || conversion == 'i')
		printed_char = convert_d_i_decimal_integer(arguments_to_convert);
	else if (conversion == 'u')
		printed_char = convert_u_usigned_decimal_number(arguments_to_convert);
	else if (conversion == 'x')
		printed_char = convert_x_hexadecimal_number(arguments_to_convert);
	else if (conversion == 'X')
		printed_char = convert_xx_hexadecimal_number(arguments_to_convert);
	else if (conversion == '%')
		printed_char = convert_pourcentage(conversion);
	else
	{
		return (-1);
	}
	return (printed_char);
}

int	parse_the_string(const char *format, int i)
{
	if (format[i] == 'c')
		return (format[i]);
	if (format[i] == 's')
		return (format[i]);
	if (format[i] == 'p')
		return (format[i]);
	if (format[i] == 'd' || format[i] == 'i')
		return (format[i]);
	if (format[i] == 'u')
		return (format[i]);
	if (format[i] == 'x')
		return (format[i]);
	if (format[i] == 'X')
		return (format[i]);
	if (format[i] == '%')
		return (format[i]);
	else
		return (-1);
}

int	read_format(const char *format, va_list arguments_to_convert)
{
	int		i;
	char	conversion;
	int		printed_char;

	i = 0;
	printed_char = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			conversion = parse_the_string(format, i);
			if (conversion == -1)
				return (-1);
			else
				printed_char += print_str(conversion, arguments_to_convert);
		}
		else
		{
			printed_char++;
			ft_putchar(format[i]);
		}
		i++;
	}
	return (printed_char);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments_to_convert;
	int		printed_char;

	if (format == NULL)
		return (-1);
	va_start(arguments_to_convert, format);
	printed_char = read_format(format, arguments_to_convert);
	va_end(arguments_to_convert);
	return (printed_char);
}
