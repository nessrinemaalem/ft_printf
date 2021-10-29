/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p_pointer_in_hex.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:16:38 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/29 14:04:44 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_p_pointer_in_hex(va_list arguments_to_convert)
{
	void	*number;
	int		number_of_printed_char;
	char	*str;

	number = va_arg(arguments_to_convert, void *);
	number_of_printed_char = 2;
	if (number == NULL)
	{
		ft_putstr("0x0");
		return (3);
	}
	ft_putstr("0x");
	str = ft_utoa_base((unsigned long long)number, "0123456789abcdef");
	number_of_printed_char += ft_putstr(str);
	if (str)
		free(str);
	return (number_of_printed_char);
}
