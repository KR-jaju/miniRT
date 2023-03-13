NAME := miniRT
SRCS := main.c
OBJS := $(SRCS:.c=.o)
ARCS := list/list.a math/math.a system/system.a raytracer/raytracer.a
LIBS := $(addprefix -I, $(dir $(ARCS)))
CFLAGS = -Wall -g

# $< is first prerequisite
# $@ is name of pattern rule
# $^ is list of prerequisites

all: $(NAME)

$(ARCS):
	$(MAKE) -C $(dir $@)

$(OBJS): %.o: %.c
	$(CC) -c -o $@ $< $(LIBS)

$(NAME): $(OBJS) $(ARCS)
	$(CC) $(CFLAGS) -o $@ $< $(ARCS)

clean:
	rm -f $(OBJS)
	$(foreach ar, $(ARCS), $(MAKE) -C $(dir $(ar)) clean;)
	
fclean: clean
	rm -f $(NAME)
	$(foreach ar, $(ARCS), $(MAKE) -C $(dir $(ar)) fclean;)

re: fclean all

.PHONY: all clean fclean re
