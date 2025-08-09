kavin :student_linkedlist.o add_end.o Deleteall.o Delete.o modify.o my_printf.o reverse.o save.o sort.o
	cc student_linkedlist.c add_end.c Deleteall.c Delete.c modify.c my_printf.c reverse.c save.c sort.c -o kavin
student_linkedlist.o : student_linkedlist.c
	 cc -c student_linkedlist.c

add_end.o : add_end.c
	cc -c add_end.c
         
Deleteall.o : Deleteall.c
	cc -c Deleteall.c
     	 
Delete.o : Delete.c
	 cc -c Delete.c

modify.o : modify.c
	cc -c modify.c

my_printf.o : my_printf.c
	cc -c my_printf.c

reverse.o : reverse.c
	cc -c reverse.c

save.o : save.c
	cc -c save.c

sort.o : sort.c
	cc -c sort.c
