#include"header.h"
/*
void add_end(ST **ptr)//ptr=&hptr// *ptr=hptr;
{
     static int roll_counter = 1;
     struct st *new_node = (struct st *)malloc(sizeof(struct st));
     if(!new_node){
	     printf("memory allocation failted\n");
	     return ;
     }
     
     new_node->roll = roll_counter++;
     printf("Enter name: ");
     scanf("%[^\n]",new_node->name);
     printf("Enter marks: ");
     scanf("%f", &new_node->mark);
     new_node->next = NULL;

     if(*ptr == 0){
//        temp->next = *ptr;
	*ptr = new_node;
     }
     else{
	     ST *last = *ptr;

	     while(last->next!=0)
		     last = last->next;

	     temp->next = last->next;
	     last->next = temp;
     }
}*/
void add_end(ST **ptr) {
    static int roll_counter = 1;  // Automatically assigned roll number

    ST *new_node = (ST *)malloc(sizeof(ST));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->roll = roll_counter++;  // Auto-increment
    printf("Enter name: ");
    scanf(" %[^\n]", new_node->name);
    printf("Enter marks: ");
    scanf("%f", &new_node->mark);
    new_node->next = NULL;

    if (*ptr == NULL) {
        *ptr = new_node;
    } else {
        ST *temp = *ptr;              // ✅ This line was missing
        while (temp->next)
            temp = temp->next;
        temp->next = new_node;
    }

    printf("Assigned roll number: %d\n", new_node->roll);
}












































