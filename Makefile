# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 07:25:04 by iel-mach          #+#    #+#              #
#    Updated: 2022/02/16 22:20:26 by iel-mach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRCS = *.c
all : $(NAME)

$(NAME) : $(SRCS)
			@gcc $(FLAGS) $(SRCS)  -o $(NAME)

clean:
	@rm -f $(NAME) 

fclean: clean

re: fclean all