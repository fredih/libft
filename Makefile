SRCFOLDER := srcs
SRCS := $(wildcard *.c)
OBJS := $(wildcard *.c)
OBJS := $(OBJS:.c=.o)

all: libft.a

libft.a: $(OBJS)
	ar rc libft.a $(OBJS)

$(OBJS): %.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f libft.a

re: fclean all

so: 
	gcc -nostartfiles -shared -o libft.so $(SRCS)

.PHONY = all clean fclean libft.a re

