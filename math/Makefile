NAME := math.a
SRCS := vec3.c
OBJS := $(SRCS:.c=.o)
ARCS := 
LIBS := $(addprefix -I, $(dir $(ARCS)))
CFLAGS = -Wall -g

all: $(OBJS) $(ARCS)
	ar rcs $(NAME) $^ $(ARCS)

$(ARCS):
	$(MAKE) -C $(dir $@)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $< $(LIBS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
