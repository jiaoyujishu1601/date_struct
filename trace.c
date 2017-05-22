#include"struct.h"
extern int sert(Node **root_pointer, int new_value);
extern Node *search(Node *root, int value);
extern void delete_node(Node *root, int value);
int main(){
	int i = 0;
	Node *root,a1;
	root = &a1;
	a1.next = NULL;
	a1.data = 1;
	i = sert(&root,12);
	i = sert(&root, 12);
	i = sert(&root, 12);
	i = sert(&root, 11);
	i = sert(&root, 15);
	delete_node(root, 1);
	return 0;
}
