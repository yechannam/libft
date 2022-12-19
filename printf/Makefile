# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 13:23:58 by yecnam            #+#    #+#              #
#    Updated: 2022/11/28 10:51:19 by yecnam           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c help_func.c print1.c print2.c

OBJS = $(SRCS:.c=.o)
INC = ./

CC = cc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

$(NAME) : $(OBJS)
	ar rcs $@ $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re
