#include "node.h"
#include <iostream>


node::node() :info(0), p_next(__nullptr){
	std::cout << "c-tor called\n";
}
