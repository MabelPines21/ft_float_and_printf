# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umoff <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 18:43:32 by umoff             #+#    #+#              #
#    Updated: 2019/05/09 14:21:59 by umoff            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c \
ft_strdup.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
ft_strnstr.c ft_strstr.c ft_strrchr.c ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
ft_strjoin.c ft_strtrim.c ft_isspace.c ft_strsplit.c ft_strndup.c ft_itoa.c \
ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c \
ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_make_zero_str.c \
ft_addition_long_arithmetic.c  ft_division_long_arithmetic.c \
ft_difference_long_arithmetic.c ft_exponentiation_long_arithmetic.c \
ft_shift_elements_left.c ft_shift_elements_right.c  ft_abs.c \
ft_make_number.c ft_array_length.c \

OBJECTS = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
ft_memmove.o ft_memset.o ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o \
ft_strdup.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnstr.o \
ft_strstr.o ft_strrchr.o ft_strlcat.o ft_toupper.o ft_tolower.o \
ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o \
ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o \
ft_strjoin.o ft_strtrim.o ft_isspace.o ft_strsplit.o ft_strndup.o ft_itoa.o \
ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o \
ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_lstdelone.o \
ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_make_zero_str.o \
ft_addition_long_arithmetic.o  ft_division_long_arithmetic.o \
ft_difference_long_arithmetic.o ft_exponentiation_long_arithmetic.o \
ft_shift_elements_left.o ft_shift_elements_right.o ft_abs.o \
ft_make_number.o ft_array_length.o \

HEADERS = ./

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I$(HEADERS) -Wall -Wextra -Werror
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)
clean:
	/bin/rm -f *.o
fclean: clean	
	/bin/rm -f $(NAME)

re: fclean all  
