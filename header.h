#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st{
	int roll;
	char name[20];
	float mark;
	struct st *next;
}ST;

void block(void);
void add_end(ST**);
void Delete(ST**,int);
void my_printf(ST*);
void save(ST*);
void sort(ST**,int);
void reverse(ST **);
void Deleteall(ST**);
int count(ST *); //ST *ptr = hptr;
void modify(ST**,int);






//note :
//1.learn from this project 
//error : conflict error --> which means if we are declaring same function name in two or more files
//2.without asking user input how to go enter your choice using goto

