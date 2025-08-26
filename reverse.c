#include "header.h"
#include <stdlib.h>
#include <string.h>

// Deep copy of the linked list
ST *copy_list(ST *src) {
    if (!src) return NULL;

    ST *new_head = NULL, *tail = NULL;
    while (src) {
        ST *new_node = (ST *)malloc(sizeof(ST));
        if (!new_node) return NULL;

        *new_node = *src;        // Copy data
        new_node->next = NULL;   // Reset next pointer

        if (!new_head)
            new_head = tail = new_node;
        else {
            tail->next = new_node;
            tail = new_node;
        }
        src = src->next;
    }
    return new_head;
}

void reverse(ST **ptr) {
    if (!ptr || !*ptr) return;

    ST *copy = copy_list(*ptr); // Create a deep copy
    int c = count(copy);        // Count nodes

    ST **p = (ST **)malloc(c * sizeof(ST *));
    ST *temp = copy;

    for (int i = 0; i < c; i++) {
        p[i] = temp;
        temp = temp->next;
    }

    p[0]->next = NULL;
    for (int i = 1; i < c; i++) {
        p[i]->next = p[i - 1];
    }

    ST *reversed_head = p[c - 1];  // New head of reversed list
    free(p);

    my_printf(reversed_head); 
}

int count(ST *ptr) //ST *ptr = hptr;
{
	int c = 0;
	while(ptr != 0)
	{
		c++;
		ptr = ptr->next;
	}
	return c;
}
