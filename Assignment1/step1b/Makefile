Project_Name = Assignment

SRC = src/mystring.c\
	src/myutlibs.c\
	test.c\
	src/bit_setReset.c
INC = -Iinc

$(Project_Name).out: $(SRC) 
	gcc $^ -o  $@ $(INC)

run:
	./$(Project_Name).out

clean:
	rm -rf *.o *.out

