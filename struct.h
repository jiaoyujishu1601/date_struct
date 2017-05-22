#include<stdlib.h>
#include<stdio.h>
#define malloc
#define TRUE 1
#define FALSE 0
//#undef malloc
#define _malloc(type,num)  ((type *)alloc((num)*sizeof(type)))
//#define sll_insert(root_pointer,new_value) (int )sert(root_pointer, new_value)
//#define find(root,value) (Node *)search(root,value)
extern  void *alloc(size_t size);

typedef struct Node_tag{
	struct Node_tag *next;
	int data;
}Node;
extern int sert(Node **root_pointer, int new_value);
extern Node *search(Node *root, int value);
