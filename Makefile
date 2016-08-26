SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:.c=.o)
CFLAGS=-fPIC

peppershim.so: $(OBJS)
	gcc -shared -o $@ $^ -L/usr/lib/chromium-pepper-flash/ -lpepflashplayer -Wl,-rpath=/usr/lib/chromium-pepper-flash/

clean:
	rm -f peppershim.so $(OBJS)

.PHONY: clean
