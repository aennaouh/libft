NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c\
	ft_isalpha.c\
	ft_memcmp.c\
	ft_putendl_fd.c\
	ft_strncmp.c\
	ft_toupper.c\
	ft_isascii.c\
	ft_memcpy.c\
	ft_putnbr_fd.c\
	ft_strjoin.c\
	ft_strnstr.c\
	ft_isdigit.c\
	ft_memmove.c\
	ft_putstr_fd.c\
	ft_strlcat.c\
	ft_strrchr.c\
	ft_bzero.c\
	ft_isprint.c\
	ft_memset.c\
	ft_split.c\
	ft_strlcpy.c\
	ft_strtrim.c\
	ft_calloc.c\
	ft_strchr.c\
	ft_strlen.c\
	ft_substr.c\
	ft_isalnum.c\
	ft_memchr.c\
	ft_putchar_fd.c\
	ft_strdup.c\
	ft_strmapi.c\
	ft_tolower.c\
	ft_itoa.c\
	ft_striteri.c


OBJS = ${SRC:.c=.o}

all: $(NAME)

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< 

$(NAME): ${OBJS} 
	ar -rc ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}
	
fclean: clean
	rm -f ${NAME}

re : fclean all 

.PHONY: all clean fclean re
