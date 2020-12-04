# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/04 15:59:29 by mjin              #+#    #+#              #
#    Updated: 2020/12/04 23:43:03 by mjin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_atoi.c			ft_bzero.c			ft_calloc.c		\
			ft_isalpha.c		ft_isalnum.c		ft_isdigit.c	\
			ft_memccpy.c		ft_memcpy.c			ft_isprint.c	\
			ft_memmove.c		ft_memset.c			ft_putchar_fd.c	\
			ft_putendl_fd.c		ft_putnbr_fd.c		ft_putstr_fd.c	\
			ft_split.c			ft_strchr.c			ft_strncmp.c	\
			ft_strdup.c			ft_strjoin.c		ft_strlcat.c	\
			ft_strlcpy.c		ft_strlen.c			ft_strmapi.c	\
			ft_strnstr.c		ft_strrchr.c		ft_memcmp.c		\
			ft_strtrim.c		ft_substr.c			ft_tolower.c	\
			ft_toupper.c		ft_isascii.c		ft_itoa.c		\
			ft_memchr.c
BONUSES	=	ft_lstnew.c			ft_lstadd_front.c	ft_lstsize.c	\
			ft_lstlast.c		ft_lstadd_back.c	ft_lstmap.c		\
			ft_lstdelone.c		ft_lstclear.c		ft_lstiter.c

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

OBJS	=	$(SRCS:.c=.o)
B_OBJS	=	$(BONUSES:.c=.o)

.SUFFIXES : .o .c
%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< 


RM		=	rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus : $(OBJS) $(B_OBJS)
	ar rc $(NAME) $(OBJS) $(B_OBJS)

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
