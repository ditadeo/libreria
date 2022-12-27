# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 12:37:37 by ditadeo-          #+#    #+#              #
#    Updated: 2022/12/27 15:06:54 by ditadeo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS            =   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
                    ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c
                    
OBJS            = $(SRCS:.c=.o)
CC              = gcc
RM              = rm -f
CFLAGS          = -Wall -Wextra -Werror
NAME            = libft.a
all:            $(NAME)
$(NAME):        $(OBJS)
				 ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
.PHONY:			all clean fclean

