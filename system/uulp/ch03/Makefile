CC=gcc
CFLAGS=
LIBS=

EXES=\
	ls\
	filesize\
	fileinfo

%: %.o
	${CC} -o $@ $< ${CFLAGS}

%.o: %.c
	${CC} -o $@ -c $< ${CFLAGS}

all: ${EXES}

clean:
	@rm -f ${EXES} *~ *.o