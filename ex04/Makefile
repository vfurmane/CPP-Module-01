# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 12:51:10 by vfurmane          #+#    #+#              #
#    Updated: 2021/11/14 12:38:53 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace
SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g3
RM			= rm -f

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
