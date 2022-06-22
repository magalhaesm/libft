LIBFT		= libft
LIB			= $(LIBFT)/libft.a

SRCS		= tests/srcs
OBJS		= tests/objs
UTIL_SRC	= $(wildcard tests/utils/*.c)
UTIL_OBJ	= $(subst tests/utils, $(OBJS), $(UTIL_SRC:.c=.o))

CC			= gcc
CFLAGS		= -g -fsanitize=address -Wall -Wextra -Werror
RM			= rm -f

MANDATORY	= isalpha toupper isdigit tolower isalnum isascii isprint \
				strlen strchr strrchr strncmp strlcpy strlcat strnstr \
				memset bzero memcpy memmove memchr memcmp atoi calloc strdup \
				substr strjoin strtrim split itoa strmapi striteri \
				putchar_fd putstr_fd putendl_fd putnbr_fd

BONUS	= lstnew lstadd_front lstsize lstlast lstadd_back lstdelone \
				lstclear lstiter

all: $(MANDATORY) $(BONUS)
		@make clean >/dev/null

mandatory: $(MANDATORY)
		@make clean >/dev/null

bonus: $(BONUS)
		@make clean >/dev/null

$(MANDATORY):	%:	$(OBJS)/test_ft_%.o $(UTIL_OBJ) $(LIB)
		@$(CC) $(CFLAGS) $^ -lbsd -o $@
		@./$@

$(BONUS):	%:	$(OBJS)/test_ft_%.o $(UTIL_OBJ) $(LIB)
		@$(CC) $(CFLAGS) $^ -o $@
		@./$@

$(LIB):
		@make -C $(LIBFT) >/dev/null

$(OBJS)/test_ft_%.o:	$(SRCS)/test_ft_%.c
		@mkdir -p $(OBJS)
		@$(CC) $(CFLAGS) -c $< -o $@

$(UTIL_OBJ):	$(UTIL_SRC)
		@$(CC) $(CFLAGS) -c $< -o $@

c:	clean

clean:
		@file * | grep ELF | cut -d ':' -f1 | xargs $(RM)

fclean:	clean
		@$(RM) -r $(OBJS)
		@make fclean -C $(LIBFT) >/dev/null

re:		fclean all

.PHONY:		all clean fclean re
