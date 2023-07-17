# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 12:04:25 by jrinna            #+#    #+#              #
#    Updated: 2021/12/17 09:33:14 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

-include Sources.mk LSources.mk

OBJ = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc

INC = ./includes/*.h

LIB = libft.a

LIBH = ./libft/libft.h

CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJ} $(LIB) $(INC)
	$(CC) $(CFLAGS) $(OBJ) -I $(INC) $(LIB) -o $(NAME)

$(LIB): $(LSRCS) $(LIBH)
	$(MAKE) -C ./libft
	cp ./libft/libft.a ./

%.o : %.c Makefile $(INC)
	$(CC) $(CFLAG) -I $(INC) -c $< -o $@

all : ${NAME}

bonus : ${NAME}

clean :
	${MAKE} clean -C ./libft
	$(RM) ${OBJ}

fclean : clean
	${MAKE} fclean -C ./libft
	$(RM) $(NAME)
	$(RM) $(LIB)

re :
	$(MAKE) fclean
	$(MAKE) all

gmk:
	echo "SRCS += " > Sources.mk
	echo "LSRCS += " > LSources.mk
	find sources -name "*.c" | sed 's/^/SRCS += /' >> Sources.mk
	find libft -name "*.c" | sed 's/^/LSRCS += /' >> LSources.mk

nono:
	norminette -R CheckForbiddenSourceHeader
	norminette -R CheckDefined