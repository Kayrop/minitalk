# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kayrop <kayrop@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 14:52:42 by adahmani          #+#    #+#              #
#    Updated: 2024/02/03 03:36:51 by kayrop           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c
SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
NAME = libft.a
OBJDIR = ../objs/
OBJSDIR = $(OBJDIR)libft/
OBJS = $(addprefix $(OBJSDIR), $(SRCS:.c=.o))
OBJSB = $(addprefix $(OBJSDIR), $(SRCSB:.c=.o))
CC = cc
CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "      _      _ _      __ _      _____                      _ _          _ "
	@echo "     | |    (_) |    / _| |    / ____|                    (_) |        | |"
	@echo "     | |     _| |__ | |_| |_  | |     ___  _ __ ___  _ __  _| | ___  __| |"
	@echo "     | |    | | '_ \|  _| __| | |    / _ \| '_ \` _ \| '_ \| | |/ _ \/ _\` |"
	@echo "     | |____| | |_) | | | |_  | |___| (_) | | | | | | |_) | | |  __/ (_| |"
	@echo "     |______|_|_.__/|_|  \__|  \_____\___/|_| |_| |_| .__/|_|_|\___|\__,_|"
	@echo "                                                    | |                   "
	@echo "                                                    |_|                   "
	@echo "\033[93m☆\033[00m ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ \033[93m☆\n\n"


$(OBJSDIR)%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB) all
	@ar r $(NAME) $(OBJSB)
	@echo "Libft Bonus Done !"
