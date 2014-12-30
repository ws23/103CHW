main: main.o stack.o stackErr.o
	gcc main.o stack.o stackErr.o -o 410121021_Pra12.exe

main.o: stack stack.h stackErr.h
	gcc main.c -c

stack.o: stackErr stack.h stackErr.h
	gcc -x c stack.c -c

stackErr.o: stack.QAQ stackErr.h 
	gcc -x c stack.QAQ -c -o stackErr.o 
