# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bskiba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 22:44:28 by bskiba            #+#    #+#              #
#    Updated: 2017/04/13 02:01:29 by bskiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = gcc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror
LIB     = -L./libft -lft
NAME    = bskiba.filler
SRCS    =   srcs/check_2.c\
			srcs/check_x.c \
			srcs/get_map.c\
			srcs/play_block_o.c\
			srcs/play_block_o_3.c\
			srcs/play_block_x_2.c\
			srcs/play_simple_2.c\
			srcs/try_place_block.c\
			srcs/check_o.c\
			srcs/get_next_line.c\
			srcs/play_block_o_1.c\
			srcs/play_block_x.c\
			srcs/play_block_x_3.c\
			srcs/player1.c\
			srcs/check_point.c\
			srcs/get_data.c\
			srcs/main.c\
			srcs/play_block_o_2.c\
			srcs/play_block_x_1.c\
			srcs/play_simple.c\
			srcs/player2.c\

OBJS    =   $(SRCS:.c=.o)

all:        $(NAME)

$(NAME):    $(OBJS)
			Make -C ./libft
			$(CC) -o $(NAME) $(OBJS) $(LIB)

clean:
		$(RM) $(OBJS)
		Make -C ./libft fclean

fclean:     clean
	$(RM) $(NAME)

re:         fclean all

.PHONY:     all clean fclean re
