/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_d_i_decimal_integer_number.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:32:56 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/29 14:02:56 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_d_i_decimal_integer(va_list arguments_to_convert)
{	
	int		number;
	int		number_of_printed_char;
	char	*str;

	number_of_printed_char = 0;
	number = va_arg(arguments_to_convert, int);
	if (number == -2147483648)
	{
		number_of_printed_char = ft_putstr("-2147483648");
		return (number_of_printed_char);
	}
	if (number == 0)
	{
		number_of_printed_char = ft_putnbr(number);
		return (number_of_printed_char);
	}
	str = ft_itoa(number);
	number_of_printed_char = ft_putstr(str);
	if (str)
		free(str);
	return (number_of_printed_char);
}
