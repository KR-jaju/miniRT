NAME := system.a
SRCS := entity/entity.c module/module.c scene/scene.c
OBJS := $(SRCS:.c=.o)
ARCS := ../math/math.a ../list/list.a
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
