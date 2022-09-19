NAME = libspewc.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror -I .

LIBC = ar rc
LIBR = ranlib

CTYPE = ft_isprint.c \
		ft_isspace.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_tolower.c \
		ft_toupper.c \

LIST =  ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstsize.c \

STDIO = ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putunbr_fd.c \
		ft_puthex_fd.c \
		ft_putptr_fd.c\

STRING = ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memchr.c \
		ft_bzero.c \
		ft_strmapi.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_striteri.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_substr.c \
		ft_split.c \
		ft_indexof.c \

STDLIB = ft_atoi.c \
		ft_itoa.c \
		ft_calloc.c \

SRCS = $(addprefix ctype/, $(CTYPE)) \
		$(addprefix list/, $(LIST)) \
		$(addprefix stdio/, $(STDIO)) \
		$(addprefix string/, $(STRING)) \
		$(addprefix stdlib/, $(STDLIB)) \

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

.c.o :
		$(CC) $(CCFLAGS) -c -o $(<:.c=.o) $<

$(NAME): $(OBJS)
		$(LIBC) $(NAME) $(OBJS)
		$(LIBR) $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o
