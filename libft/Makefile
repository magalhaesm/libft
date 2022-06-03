NAME		= libft.a

OBJDIR		= objs

# TODO: explicitar cada código-fonte
SRCS		= $(wildcard ft_*.c)
OBJS		= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

CC			= gcc
CFLAGS		= -g -Wall -Wextra -Werror
RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
		ar -rcs $(NAME) $(OBJS)
		ranlib $(NAME)

$(OBJDIR)/%.o:	%.c
		@mkdir -p $(OBJDIR)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)
		$(RM) -r $(OBJDIR)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
