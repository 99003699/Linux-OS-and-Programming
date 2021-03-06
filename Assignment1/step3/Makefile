CFLAGS = -I../inc

libstr: mystring.o
	ar rc libmystring.a $^

libutil: myutils.o
	ar rc libmyutlibs.a $^

libbitop: bit_set_reset.o
	ar rc libbitsetreset.a $^

clean:
	rm -rf *.o *.a