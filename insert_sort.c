#include"struct.h"
//单节点插入
//witer :wjr;
//time  :2017/5/6;
int sert(Node **root_pointer,int new_value){
	Node *current;
	Node *new_node;
	while ((current = *root_pointer) != NULL&&current->data<new_value){
		root_pointer = &current->next;
	}
	new_node = _malloc(Node, 1);
	new_node->data = new_value;
	new_node->next = current;
	*root_pointer  = new_node;
	return 1;
}
Node *search(Node *root, int value){
	Node *search_in;
	search_in = root;
	while ((search_in) && (search_in->data != value)){
		search_in = search_in->next;
	}
	if (search_in == NULL)
		exit(1);
	return search_in;
}
void delete_node(Node *root, int value){
	Node *current;
	Node *precend;
	current = root;
	precend = root;
	while ((current!=NULL)&&(current->data!=value)){
		precend = current;
	    current = current->next;
		if (current->next == NULL)
			exit(-1);
	}
	precend= current->next;
}
