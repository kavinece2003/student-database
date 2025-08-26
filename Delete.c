#include"header.h"

void Delete(ST **ptr,int n) //ST **ptr = &hptr; //ptr = &hptr; //*ptr = hptr;
{
	ST *prv,*temp = *ptr;
	while(temp != 0)
	{
		if(temp->roll == n)
		{
			if(*ptr == temp)
			*ptr = temp->next;
			else
			prv->next = temp->next;

			free(temp);	temp = NULL;  	//goto label;
		}
		else
		{
			prv = temp;
			temp = temp->next;
		}
	}
	//my_printf();
	printf("enter valid roll_no to delete the node\n");
}
