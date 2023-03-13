NAME := list.a
SRCS := list.c list_private.c
OBJS := $(SRCS:.c=.o)
ARCS := ../math/math.a
LIBS := $(dir $(ARCS))
CFLAGS = -Wall -g

all: $(OBJS) $(ARCS)
	ar rcs $(NAME) $^ $(ARCS)

$(ARCS):
	$(MAKE) -C $(dir $@)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $< -I $(LIBS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
