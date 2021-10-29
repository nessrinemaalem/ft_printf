/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u_unsigned_decimal_number.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:34:33 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/29 10:59:58 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_u_usigned_decimal_number(va_list arguments_to_convert)
{
	unsigned int	number;
	int				number_of_printed_char;
	char			*str;

	number = va_arg(arguments_to_convert, unsigned int);
	number_of_printed_char = 0;
	str = ft_utoa(number);
	number_of_printed_char = ft_putstr(str);
	if (str)
		free(str);
	return (number_of_printed_char);
}
