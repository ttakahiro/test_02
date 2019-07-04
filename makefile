#
CFLAGS      = -c -g
#
LOAD        = ./cdTest2

#
SRCS        = \
./cdTest2.c

#
OBJS        = \
./cdTest2.o

#
all:    $(LOAD)
#

depend: @makedepend -- $(CFLAGS) -- $(SRCS)
#

$(LOAD):    $(OBJS)
		cc -o $(LOAD) $(OBJS)


