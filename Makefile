SRCFOLDER := srcs
OBJSNAMES := ft_strcmp.o ft_strlen.o
OBJS := $(addprefix $(SRCFOLDER)/,$(OBJSNAMES))

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

.PHONY = all clean fclean libft.a re