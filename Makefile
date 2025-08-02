# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 15:30:18 by sinseungheo       #+#    #+#              #
#    Updated: 2025/08/02 15:56:57 by sinseungheo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFILE = ft_printf.c caseofpersent.c ft_itoa.c ft_strlen.c ft_unsighed_itoa.c func_about_c.c func_about_d.c func_about_p.c func_about_s.c func_about_u.c print_hex_lower.c print_hex_upper.c print_long_hex_lower.c
OBJS = $(CFILE:.c=.o)
BONUSOBJS = $(BONUSCFILE:.c=.o)
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
 
all : $(NAME)
 
$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -rf $(OBJS) $(BONUSOBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
bonus: $(OBJS) $(BONUSOBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUSOBJS)
.PHONY : all clean fclean re bonus