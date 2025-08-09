#include "declaration.h"


int mod;
float mar;
char nam[20];

void modify(ST **ptr, int n) {
    ST *temp = *ptr;

    // Modify roll number
    if (n == 1) {
        printf("Enter the roll number you want to modify: ");
        scanf("%d", &mod);

        while (temp) {
            if (temp->roll == mod) {
                int old_roll = temp->roll;
                printf("Original Roll: %d, Name: %s, Mark: %.2f\n", temp->roll, temp->name, temp->mark);

                printf("Enter new roll number: ");
                scanf("%d", &temp->roll);

                printf("Modified! Original roll was %d, new roll is %d\n", old_roll, temp->roll);
                return;
            }
            temp = temp->next;
        }

        printf("Roll number %d not found.\n", mod);
    }

    // Modify name
    else if (n == 2) {
        printf("Enter the name you want to modify: ");
        scanf("%s", nam);

        ST *matches[100];
        int count = 0;

        temp = *ptr;
        while (temp) {
            if (strcmp(temp->name, nam) == 0) {
                matches[count++] = temp;
            }
            temp = temp->next;
        }

        if (count == 0) {
            printf("No records found with name: %s\n", nam);
            return;
        }

        if (count > 1) {
            printf("Multiple records found with the name '%s':\n", nam);
            for (int i = 0; i < count; i++) {
                printf("Roll: %d, Name: %s, Mark: %.2f\n", matches[i]->roll, matches[i]->name, matches[i]->mark);
            }
            printf("Enter the roll number of the record you want to modify: ");
            scanf("%d", &mod);
        }

        for (int i = 0; i < count; i++) {
            if (count == 1 || matches[i]->roll == mod) {
                char old_name[20];
                strcpy(old_name, matches[i]->name);

                printf("Original Roll: %d, Name: %s, Mark: %.2f\n", matches[i]->roll, matches[i]->name, matches[i]->mark);
                printf("Enter new name: ");
                scanf("%s", matches[i]->name);

                printf("Modified! Original name was '%s', new name is '%s'\n", old_name, matches[i]->name);
                return;
            }
        }

        printf("No matching record found for the entered roll number.\n");
    }

    // Modify mark
    else if (n == 3) {
        printf("Enter the mark you want to modify: ");
        scanf("%f", &mar);

        ST *matches[100];
        int count = 0;

        temp = *ptr;
        while (temp) {
            if (temp->mark == mar) {
                matches[count++] = temp;
            }
            temp = temp->next;
        }

        if (count == 0) {
            printf("No records found with mark: %.2f\n", mar);
            return;
        }

        if (count > 1) {
            printf("Multiple records found with mark %.2f:\n", mar);
            for (int i = 0; i < count; i++) {
                printf("Roll: %d, Name: %s, Mark: %.2f\n", matches[i]->roll, matches[i]->name, matches[i]->mark);
            }
            printf("Enter the roll number of the record you want to modify: ");
            scanf("%d", &mod);
        }

        for (int i = 0; i < count; i++) {
            if (count == 1 || matches[i]->roll == mod) {
                float old_mark = matches[i]->mark;

                printf("Original Roll: %d, Name: %s, Mark: %.2f\n", matches[i]->roll, matches[i]->name, matches[i]->mark);
                printf("Enter new mark: ");
                scanf("%f", &matches[i]->mark);

                printf("Modified! Original mark was %.2f, new mark is %.2f\n", old_mark, matches[i]->mark);
                return;
            }
        }

        printf("No matching record found for the entered roll number.\n");
    }

    else {
        printf("Invalid option selected.\n");
    }
}

