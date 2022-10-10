# Makefile for multiple source files, foo.cpp, foo.h, 
# prog.cpp, bar.h, and bar-1.cpp

# prog is the executable we want to make.
prog: prog.o foo.o bar-1.o
	g++ prog.o foo.o bar-1.o -o prog

# rule for making  prog.o
main.o: prog.cpp foo.h bar-1.h
	g++ -c prog.cpp

# rule for making  foo.o
foo.o: foo.cpp foo.h
	g++ -c foo.cpp

# rule for making bar.o
bar-1.o: bar-1.cpp bar.h
	g++ -c bar-1.cpp

# rule for cleaning up
clean:
	rm prog.o foo.o bar-1.o
