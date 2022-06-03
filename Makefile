LIBFT		= libft
LIB			= $(LIBFT)/libft.a

SRCS		= tests/srcs
OBJS		= tests/objs
UTIL_SRC	= $(wildcard tests/utils/*.c)
UTIL_OBJ	= $(subst tests/utils, $(OBJS), $(UTIL_SRC:.c=.o))

CC			= gcc
CFLAGS		= -g -Wall -Wextra -Werror
RM			= rm -f

MANDATORY	= isalpha toupper isdigit tolower

all: $(MANDATORY) clean

$(MANDATORY):	%:	$(OBJS)/test_ft_%.o $(UTIL_OBJ) $(LIB)
		@$(CC) $(CFLAGS) $^ -o $@
		@./$@

$(LIB):
		@make -C $(LIBFT) >/dev/null

$(OBJS)/test_ft_%.o:	$(SRCS)/test_ft_%.c
		@mkdir -p $(OBJS)
		@$(CC) $(CFLAGS) -c $< -o $@

$(UTIL_OBJ):	$(UTIL_SRC)
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@file * | grep ELF | cut -d ':' -f1 | xargs $(RM)

fclean:	clean
		@$(RM) -r $(OBJS)

re:		fclean all

.PHONY:		all clean fclean re
