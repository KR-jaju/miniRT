NAME := raytracer.a
SRCS := bvh/bvh.c bvh/bvh_private.c
OBJS := $(SRCS:.c=.o)
ARCS := ../helper/helper.a ../math/math.a ../system/system.a
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
