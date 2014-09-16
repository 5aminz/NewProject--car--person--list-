#ifndef Included_NODE_H
#define Included_NODE_H
#include <iostream>
#include "car.h"
#include "llist.h"

using namespace std;

template <class T>
class node {
	
	public:
	T* c;
	node<T>* next;
	
	node (){
		
		c = NULL;
		next = NULL;
	}
	node (T *ptr){
		
		c = ptr;
		next = NULL;
	}
};

#endif
