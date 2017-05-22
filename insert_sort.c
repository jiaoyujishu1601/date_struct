#include"struct.h"
//单节点插入
//witer :wjr;
//time  :2017/5/6;
//   root_pointer 为指向根节点的指针（方便修改根节点，当链表为空时这点很重要），new_value为新插入值
int sert(Node **root_pointer,int new_value){
	Node *current;
	Node *new_node;
	//这里current指向当前节点，root_pointer指向前一节点的next字段的指针
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
