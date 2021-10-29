/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x_hexadecimal_number.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:34:54 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/29 12:25:41 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_x_hexadecimal_number(va_list arguments_to_convert)
{
	unsigned long long	number;
	int					number_of_printed_char;
	char				*str;

	number = (unsigned long long)va_arg(arguments_to_convert, unsigned int);
	number_of_printed_char = 0;
	if (number == 0)
	{
		number_of_printed_char = ft_putnbr(number);
		return (number_of_printed_char);
	}
	str = ft_utoa_base(number, "0123456789abcdef");
	number_of_printed_char = ft_putstr(str);
	free(str);
	return (number_of_printed_char);
}
