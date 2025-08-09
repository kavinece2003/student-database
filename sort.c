#include "declaration.h"


// Reuse the deep copy function
ST *copy_list1(ST *src) {
    if (!src) return NULL;

    ST *new_head = NULL, *tail = NULL;
    while (src) {
        ST *new_node = (ST *)malloc(sizeof(ST));
        if (!new_node) return NULL;

        *new_node = *src;        // Copy struct content
        new_node->next = NULL;   // Reset next

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

void sort(ST **ptr, int op) {
    if (*ptr == NULL || (*ptr)->next == NULL)
        return;

    ST *copy = copy_list1(*ptr);  // Create deep copy
    if (!copy) return;

    ST *i, *j;
    for (i = copy; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            int need_swap = 0;

            if (op == 1) {
                // Name ascending (lexicographical)
                if (strcmp(i->name, j->name) > 0)
                    need_swap = 1;
            } else if (op == 2) {
                // Marks descending
                if (i->mark < j->mark)
                    need_swap = 1;
            } else if (op == 3) {
                // Roll number ascending
                if (i->roll > j->roll)
                    need_swap = 1;
            }

            if (need_swap) {
                // Swap values
                int tmp_roll = i->roll;
                float tmp_mark = i->mark;
                char tmp_name[20];
                strcpy(tmp_name, i->name);

                i->roll = j->roll;
                i->mark = j->mark;
                strcpy(i->name, j->name);

                j->roll = tmp_roll;
                j->mark = tmp_mark;
                strcpy(j->name, tmp_name);
            }
        }
    }

    my_printf(copy);  
}

