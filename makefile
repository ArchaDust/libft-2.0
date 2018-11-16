# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: aberneli <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/11/01 11:01:57 by aberneli     #+#   ##    ##    #+#        #
#    Updated: 2018/11/01 11:07:01 by aberneli    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c
HEAD = libft.h
OBJ = $(SRC:.c=.o)
CC = gcc -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(HEAD) $(OBJ)
	$(AR) $(OBJ) -o $(NAME)

./%.o: ./%.c $(HEAD)
	$(CC) -c $< -o $@

clean:
	rm -Rf $(OBJ)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

normy:
	norminette $(SRC) $(HEAD)
