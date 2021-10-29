# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 18:10:52 by imaalem           #+#    #+#              #
#    Updated: 2021/10/28 16:12:14 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

FILES.C =  ft_printf.c \
src/convert_pourcentage.c src/convert_xx_hexadecimal_number.c \
src/convert_c_char.c src/convert_d_i_decimal_integer_number.c \
src/convert_p_pointer_in_hex.c src/convert_s_string.c \
src/convert_u_unsigned_decimal_number.c \
src/convert_x_hexadecimal_number.c \
src/ft_utoa_base_uppercase.c \
src/ft_utoa_base.c \
src/ft_utoa.c \
src/ft_putchar.c \
src/ft_itoa.c \
src/ft_putstr.c \
src/ft_strlen.c \
src/ft_putnbr.c \

FILES.O = $(FILE.C:.c=.o) ft_printf.o \
convert_pourcentage.o convert_xx_hexadecimal_number.o \
convert_c_char.o convert_d_i_decimal_integer_number.o \
convert_p_pointer_in_hex.o convert_s_string.o \
convert_u_unsigned_decimal_number.o \
convert_x_hexadecimal_number.o \
ft_utoa_base_uppercase.o \
ft_utoa_base.o \
ft_utoa.o \
ft_putchar.o \
ft_itoa.o \
ft_putstr.o \
ft_strlen.o \
ft_putnbr.o \

all : $(NAME)

$(NAME) :
	@gcc -c $(FLAGS) $(FILES.C)
# @make -C
	@ar -rcs $(NAME) $(FILES.O)

clean :
	@rm -rf $(FILES.O)

fclean : clean
	@rm -rf $(NAME) ./a.out

re : fclean all