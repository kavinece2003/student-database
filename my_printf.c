#include"declaration.h"
void my_printf(ST *ptr){
	
	printf("\n");
	printf("+------------------------------------+\n");
	printf("|roll.no\t|NAME\t\t|MARK\t|\n");
	printf("+------------------------------------+\n");
        //printf("\n");
    while(ptr!=0){
	printf("|%d\t|%s\t\t|%0.2f\t|\n",ptr->roll,ptr->name,ptr->mark);
	printf("+------------------------------------+\n");
         ptr = ptr->next;
	}
}
