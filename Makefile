NAME = libspewc.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror -I .

LIBC = ar rc
LIBR = ranlib

LIBSPEWC_NAME = libspewc.a
LIBSPEWC_DIR = libspewc/

FT_PRINTF = ft_printf.c

GET_NEXT_LINE = get_next_line.c

SRCS = $(addprefix ft_printf/, $(FT_PRINTF)) \
		$(addprefix get_next_line/, $(GET_NEXT_LINE)) \

LIBSPEWC = $(addprefix $(LIBSPEWC_DIR), $(LIBSPEWC_NAME))

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

.c.o :
		$(CC) $(CCFLAGS) -c -o $(<:.c=.o) $<

$(LIBSPEWC) :
	make -C $(LIBSPEWC_DIR)

$(NAME): $(OBJS) $(LIBSPEWC)
		cp $(LIBSPEWC) $(NAME)
		$(LIBC) $(NAME) $(OBJS)
		$(LIBR) $(NAME)

clean:
		rm -f $(OBJS)
		make -C $(LIBSPEWC_DIR) clean

fclean: clean
		rm -f $(NAME)
		make -C $(LIBSPEWC_DIR) fclean

re: fclean all

.PHONY: all clean fclean re .c.o
