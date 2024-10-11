# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paphetpr <paphetpr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 20:13:25 by paphetpr          #+#    #+#              #
#    Updated: 2024/10/08 20:13:25 by paphetpr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c\
		ft_printnumber.c\

OBJS := $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	cc $(FLAGS) -c $< -o $(@)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(NAME) $(OBJSB)
	ar -rcs $(NAME) $(OBJSB)

clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

