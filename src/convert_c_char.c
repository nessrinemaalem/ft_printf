/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:49:57 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/26 22:06:32 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_c_char(va_list arguments_to_convert)
{
	char	c;

	c = va_arg(arguments_to_convert, int);
	if (c || c == '\0')
		ft_putchar(c);
	else
		return (-1);
	return (1);
}
