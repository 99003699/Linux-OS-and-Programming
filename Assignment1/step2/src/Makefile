CFLAGS = -I../inc

Build: mystring.c myutlibs.c bit_setReset.c
	gcc -c mystring.c myutlibs.c bit_setReset.c $(CFLAGS)

libstr: mystring.o
	ar rc libmystring.a $^

libutil: myutlibs.o
	ar rc libmyutils.a $^

libbitop: bit_setReset.o
	ar rc libbitop.a $^

clean:
	rm -rf *.o *.a