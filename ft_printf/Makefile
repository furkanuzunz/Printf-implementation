NAME = libftprintf.a

LIBFT		= ./libft/libft.a
LIBFTDIR	= ./libft

SRC = ./requisite

PRINTF_SRCS = ft_printf.c \
			  functions_printf.c \
			  hexadecimal_printf.c \
			  pointer_printf.c \
			  unsigned_printf.c

OBJS = $(PRINTF_SRCS:.c=.o)

CC = cc
AR = ar rcs
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
CP = cp

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CP) $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re