NAME = libftprintf.a
LIBPATH = ./libft/
INCDIR = ./includes/
SRCSDIR = ./srcs/
OBJDIR = ./objs/
SOURCES = $(addprefix $(SRCSDIR), ft_printf.c ft_printfbasic.c ft_printfhex.c ft_printfptr.c ft_printfunsigned.c)
OBJECTS = $(addprefix $(OBJDIR), $(notdir $(SOURCES:.c=.o)))
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(OBJDIR) $(NAME)
	@echo "\n\n██████╗░██████╗░██╗███╗░░██╗████████╗███████╗  ░█████╗░░█████╗░███╗░░░███╗██████╗░██╗██╗░░░░░███████╗██████╗░"
	@echo "██╔══██╗██╔══██╗██║████╗░██║╚══██╔══╝██╔════╝  ██╔══██╗██╔══██╗████╗░████║██╔══██╗██║██║░░░░░██╔════╝██╔══██╗"
	@echo "██████╔╝██████╔╝██║██╔██╗██║░░░██║░░░█████╗░░  ██║░░╚═╝██║░░██║██╔████╔██║██████╔╝██║██║░░░░░█████╗░░██║░░██║"
	@echo "██╔═══╝░██╔══██╗██║██║╚████║░░░██║░░░██╔══╝░░  ██║░░██╗██║░░██║██║╚██╔╝██║██╔═══╝░██║██║░░░░░██╔══╝░░██║░░██║"
	@echo "██║░░░░░██║░░██║██║██║░╚███║░░░██║░░░██║░░░░░  ╚█████╔╝╚█████╔╝██║░╚═╝░██║██║░░░░░██║███████╗███████╗██████╔╝"
	@echo "╚═╝░░░░░╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░░░╚═╝░░░╚═╝░░░░░  ░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═════╝░\n\n"
	@echo "\033[93m☆\033[00m ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ \033[93m☆\n\n"

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): libft.a $(OBJDIR) $(OBJECTS) $(INCDIR)
	ar rcs $(NAME) $(OBJECTS)

libft.a :
	@echo "\n\n\033[33m*********************** \033[35mCompiling libft \033[33m***********************\033[90m\n\n"
	$(MAKE) -C $(LIBPATH) bonus
	cp $(LIBPATH)libft.a $(NAME)

$(OBJDIR)%.o: $(SRCSDIR)%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(OBJDIR)%.o: $(INCDIR)%.h

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBPATH) fclean

bonus: all

re: fclean all