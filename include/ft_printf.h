/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:33:40 by imaalem           #+#    #+#             */
/*   Updated: 2021/10/29 11:29:09 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putnbr(int nb);
size_t	ft_strlen(char *str);
int		ft_printf(const char *form, ...);
int		convert_pourcentage(char c);
int		convert_c_char(va_list arguments_to_convert);
int		convert_d_i_decimal_integer(va_list arguments_to_convert);
int		convert_p_pointer_in_hex(va_list arguments_to_convert);
int		convert_s_string(va_list arguments_to_convert);
int		convert_u_usigned_decimal_number(va_list arguments_to_convert);
int		convert_x_hexadecimal_number(va_list arguments_to_convert);
int		convert_xx_hexadecimal_number(va_list arguments_to_convert);
char	*ft_utoa_base_uppercase(unsigned long long n, char *base);
char	*ft_utoa_base(unsigned long long int n, char *base);
char	*ft_utoa(unsigned int n);
void	ft_putchar(char c);
char	*ft_itoa(int nb);
int		ft_putstr(char *s);
int		ft_putnbr_base(unsigned long nb, char *base);

#endif