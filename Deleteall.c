#include"header.h"
void Deleteall(ST **ptr)
{
	ST *temp = *ptr;
	while(*ptr != 0)
	{
		*ptr = temp->next;
		free(temp);
		temp = *ptr;
	}

printf("all data's are deleted successfully\n");
}
