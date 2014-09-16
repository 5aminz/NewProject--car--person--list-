#ifndef Included_LLIST_H
#define Included_LLIST_H
#include "car.h"
#include "node.h"

using namespace std;

template <class T>
class llist {
	
	private:
		node<T>* head;
		int size;
		int position;
	
	public:
        llist(); 		
		void insertFirst(T* c);
		void insertLast(T* c);
		bool insertPosition(T* c, int position);
	    int length() { return size; }
	    T* at(int x);
	    
//		node* t = d1.cars.head;
//			while (t != NULL){
//				
//				output << t->c->getMake() << " " << t->c->getModel() << endl;
//				t = t->next;
//				
//			}
//			return output;
	
};

#endif
