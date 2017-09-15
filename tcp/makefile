LINK_TARGET=client.exe
OBJS = client.o

all:	$(LINK_TARGET)

$(LINK_TARGET):	$(OBJS)
	gcc -o $@ $<

%.o:	%.c
	gcc -c $<

REBUILDLABLES= $(LINK_TARGET) $(OBJS)

clean:
	rm $(REBUILDLABLES)
