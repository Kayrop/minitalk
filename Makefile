CC = cc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -I./includes
PRINTF_DIR = ./libftprintf
PRINTF = -L$(PRINTF_DIR) -lftprintf
SERVER_SRC = srcs/server.c
CLIENT_SRC = srcs/client.c
OBJ_DIR = objs/
SERVER_OBJ = $(SERVER_SRC:srcs/%.c=$(OBJ_DIR)%.o)
CLIENT_OBJ = $(CLIENT_SRC:srcs/%.c=$(OBJ_DIR)%.o)
LIBFTPRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(LIBFTPRINTF) server client
	@echo "     __  __           _        _          _ _                         _          _ \n"\
	"    |  \/  (_)     (_) |      | | |     / ____|                    (_) |        | |\n"\
	"    | \\  / |_ _ __  _| |_ __ _| | | __ | |     ___  _ __ ___  _ __  _| | ___  __| |\n"\
	"    | |\\/| | | '_ \\| | __/ _\` | | |/ / | |    / _ \\| '_ \` _ \\| '_ \\| | |/ _ \\/ _\` |\n"\
	"    | |  | | | | | | | || (_| | |   <  | |___| (_) | | | | | | |_) | | |  __/ (_| |\n"\
	"    |_|  |_|_|_| |_|_|\\__\\__,_|_|_|\\_\\  \\_____\\___/|_| |_| |_| .__/|_|_|\\___|\\__,_|\n"\
	"    		                                         | |\n"\
	"    		                                         |_|\n"\
	"\033[93m☆\033[00m ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ \033[93m☆\n\n"


$(LIBFTPRINTF):
	$(MAKE) -C $(PRINTF_DIR)

server: $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) -o server $^ $(PRINTF)

client: $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) -o client $^ $(PRINTF)

$(OBJ_DIR)%.o: srcs/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) server client

fclean: clean
	rm -rf $(OBJ_DIR) server client
	@$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
