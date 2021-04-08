main: main.o student.o roster.o
	g++ -o main main.o student.o roster.o

main.o: main.cpp
	g++ -c main.cpp

student.o: student.cpp student.h
	g++ -c student.cpp

roster.o: roster.cpp roster.h
	g++ -c roster.cpp