PROJECT_NAME = STATIC_LIB

SRC = test.c
INC = -Iinc

LDFLAGS = -lmyutlibs -lmystring -lbitop -Lsrc

$(PROJECT_NAME).out : $(SRC) libraries
	gcc $< -o $@ $(INC) $(LDFLAGS)

run : $(PROJECT_NAME).out
	./$^

libraries:
	make libstr   -C src
	make libutlibs  -C src
	make libbitop -C src

clean:
	rm -rf *.o *.out
	make clean -C src
