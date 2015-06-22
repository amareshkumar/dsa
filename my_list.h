#pragma once
#ifndef MY_LIST_H
#define MY_LIST_H
#include "node.h"

class list {
public:
	list();
	list(int data);
	list* add_to_list(list& list, int data);
private:
	node* head; 
};



#endif //MY_LIST