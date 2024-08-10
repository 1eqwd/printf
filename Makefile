# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 17:05:07 by sumedai           #+#    #+#              #
#    Updated: 2024/06/26 16:29:43 by sumedai          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS_DIR = ./srcs
SRCS = $(SRCS_DIR)/ft_pirntf.c\
	   $(SRCS_DIR)/ft_printf_c.c\
	   $(SRCS_DIR)/ft_printf_s.c\
	   $(SRCS_DIR)/ft_printf_id.c\
	   $(SRCS_DIR)/ft_printf_p.c\
	   $(SRCS_DIR)/ft_printf_u.c\
	   $(SRCS_DIR)/ft_printf_larx.c\
	   $(SRCS_DIR)/ft_printf_x.c\
	   $(SRCS_DIR)/ft_putchar_num.c\
	   $(SRCS_DIR)/ft_putstr_num.c\
	   $(SRCS_DIR)ft_putnbr_base.c\
	   $(SRCS_DIR)ft_putunbr_base.c
OBJS = $(SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes
AR = ar rcs
LIB_NAME = libft.a
LIB_PATH = ./srcs/libft/
.SUFFIXES= .c .o

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -0 $@

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_PATH)
	mv $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
	$(AR) $@ $<

all: $(NAME)

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean:
	$(MAKE) -C $(LIBFT_PATH) clean
	$(RM) $(NAME) $(OBJS)

re : fclean all
	
.PHONY: all clean fclean re