# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbriant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 21:48:28 by dbriant           #+#    #+#              #
#    Updated: 2025/01/27 13:12:45 by dbriant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_tolower.c \
          ft_toupper.c ft_isascii.c ft_isprint.c ft_strchr.c \
          ft_strlen.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
          ft_memset.c ft_bzero.c ft_memcpy.c ft_memcmp.c \
          ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
          ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
          ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
          ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
          ft_putendl_fd.c ft_putnbr_fd.c
BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS    = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
RM      = rm -f

# Default rule to build the library
all : $(NAME)

# Rule to compile and link the mandatory part
$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

# Rule to compile and link the mandatory and bonus part
bonus : $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

# Rule for compiling source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

# Remove the compiled library
fclean : clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re

