# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ditadeo- <ditadeo-@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 12:37:37 by ditadeo-          #+#    #+#              #
#    Updated: 2023/01/30 13:03:25 by ditadeo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS            =   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
                    ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
					ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c
                    
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

