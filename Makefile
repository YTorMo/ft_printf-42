# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 13:17:15 by ytoro-mo          #+#    #+#              #
#    Updated: 2022/05/18 15:36:22 by ytoro-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_M =	ft_putchar_fd \
			ft_strchr \
			ft_strlen \
			ft_char_str_formats \
			ft_num_formats \
			ft_percentage_format \
			ft_pointer_format \
			ft_printf_utils \
			ft_printf \

NAME = libftprintf.a

GCC = gcc

RM = rm -f

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = ./
OBJ_M = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_M)))
OBJ_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

$(NAME):	${OBJ_M}
			${AR} ${NAME} ${OBJ_M}

all:		${NAME}

clean:
			${RM} ${OBJ_M}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re