# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:05:55 by jmehlig           #+#    #+#              #
#    Updated: 2022/10/30 17:13:17 by jmehlig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRCS	=		ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strjoin_free.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_free.c \
				ft_free_double.c \
				ft_split_del.c \
				ft_lstdelnode.c \
				ft_lstfree.c \
				ft_malloc.c \
				ft_split_modified.c \
				ft_free_2d_array.c \
				ft_free_2d_array_nullterminated.c \
				ft_destroy.c \
				ft_remove_characters.c \
				ft_lstdelkey.c \
				ft_iswhitespace.c \
				ft_comp_float.c \
				ft_f_less_f.c \
				ft_f_greater_f.c \
				ft_len_double.c

OBJS	=		$(SRCS:.c=.o)

BSRCS	=		ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \

GREEN = \033[1;32m
WHITE = \033[0m

BOBJS	=		$(BSRCS:.c=.o)

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror

AR		=		ar rc

RM		=		rm -f

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(GREEN)libft compiled!\n$(WHITE)"; \

bonus:		$(NAME) $(BOBJS)
			$(AR) $(NAME) $(BOBJS)

clean:
			@$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			@$(RM) $(NAME)

all:		$(NAME)

re:			fclean all
