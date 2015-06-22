#pragma once
#ifndef NODE_H
#define NODE_H

class node{
public:
	node();
	~node();
private:
	int info; 
	node* p_next; 
	friend class list; 
};

#endif //NODE_H