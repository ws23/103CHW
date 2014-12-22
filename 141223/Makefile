main: main.o
	gcc main.o stack.o stackErr.o -o test.exe

main.o: stack
	gcc main.c -c

stack: stackErr
	gcc -x c stack.XD -c

stackErr: 
	gcc -x c stack.QAQ -c -o stackErr.o
