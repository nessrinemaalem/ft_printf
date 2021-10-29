/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:03:45 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/26 22:25:49 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	treat_null_case(void)
{
	int		i;
	char	*str;

	i = 0;
	str = "(null)";
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	convert_s_string(va_list arguments_to_convert)
{
	char	*str;
	int		number_of_char_printed;
	int		i;

	str = va_arg(arguments_to_convert, char *);
	number_of_char_printed = 0;
	i = 0;
	if (str == NULL)
	{
		number_of_char_printed = treat_null_case();
		return (number_of_char_printed);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	number_of_char_printed = i;
	return (number_of_char_printed);
}
