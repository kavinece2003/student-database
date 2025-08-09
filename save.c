#include"declaration.h"
void save(ST *ptr){
	FILE *fd = fopen("file1","w");
	while(ptr!=0){
		fprintf(fd,"%d %s %f \n",ptr->roll,ptr->name,ptr->mark);
	    ptr = ptr->next;
	}
        fclose(fd);	
        printf("file is saved successfully\n");
}
