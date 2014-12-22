main: main.o stack.o stackErr.o
	gcc main.o stack.o stackErr.o -o test.exe

main.o: stack stack.h stackErr.h
	gcc main.c -c

stack: stackErr stack.h stackErr.h
	gcc -x c stack.XD -c

stackErr: stack.QAQ stackErr.h 
	gcc -x c stack.QAQ -c -o stackErr.o 
