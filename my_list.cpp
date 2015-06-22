#include "my_list.h"
#include <iostream>

list::list():head(__nullptr){
	std::cout << "c-tor0 is called\n";
}

list::list(int data): head (__nullptr){
	head->info = data;
	head->p_next = NULL;
	std::cout << "c-tor1 is called\n";
}

/*list* list::add_to_list(list& list, int data){
	list temp;

	return temp;
}*/