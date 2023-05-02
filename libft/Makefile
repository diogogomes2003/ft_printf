# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 14:30:19 by dduarte-          #+#    #+#              #
#    Updated: 2023/05/02 12:17:16 by dduarte-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strdup.c\
		ft_atoi.c ft_memcmp.c ft_memmove.c ft_memset.c ft_memcpy.c ft_memchr.c ft_bzero.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_calloc.c\
		ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_striteri.c ft_itoa.c ft_split.c
SRCB =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = ${SRC:.c=.o}
OBJSB = ${SRCB:.c=.o}
HEADER = libft.h
INCLUDE = -I include
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
.c.o:
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
		ar rcs ${NAME} ${OBJS} ${HEADER}

all:	${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${OBJSB}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

bonus:	${OBJS} ${OBJSB}
		ar rcs ${NAME} ${OBJSB} ${OBJS} ${HEADER}

.PHONY: all clean fclean re bonus
