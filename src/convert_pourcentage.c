/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_pourcentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:30:31 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/26 22:21:23 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	convert_pourcentage(char c)
{
	int	number_of_char_printed;

	number_of_char_printed = 1;
	write(1, &c, 1);
	return (number_of_char_printed);
}
