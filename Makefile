# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dduarte- <dduarte-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 08:43:18 by dduarte-          #+#    #+#              #
#    Updated: 2023/04/28 10:36:49 by dduarte-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 			libftprintf.a

SRC = 			ft_printfutils.c ft_printf_hex.c ft_printf_ptr.c

OBJS = 			$(SRC.c=.o)

INCLUDE = 		-I include
MAKE = 			make -C
CC = 			gcc
RM = 			rm -f
CFLAGS = 		-Wextra -Wall -Werror
LIBFT_PATH =	libft
LIBFT = 		${LIBFT_PATH}/libft.a
.c.o:
				@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)



$(NAME):	$(OBJS)
			$(MAKE) $(LIBFT_PATH)
			cp $(LIBFT) $(NAME)
			@ar rcs $(NAME) $(OBJS)

all:		$(NAME)
		
clean:	
			$(MAKE) $(LIBFT_PATH) clean
			@$(RM) $(OBJS) 

fclean:		clean 
			$(MAKE) $(LIBFT_PATH) fclean
			@$(RM) $(OBJS)

re:			fclean all

.PHONY: 	all clean fclean re