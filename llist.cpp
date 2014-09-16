#include "llist.h"

template <class T>
llist<T>::llist() {
  head = NULL;
  size = 0;
}

template <class T>
T* llist<T>::at(int x){
	int pos = 0;
	node<T>* temp = head;
	while (head != NULL){
		if (pos == x){
			return temp->c;
		}
	pos++;
	temp = temp->next;
	}
	return NULL;
}

template <class T>
void llist<T>::insertFirst(T *c){
	
	node<T>* temp = new node<T>(c);
	
	if (head == NULL){
		
		head = temp;
		
	}
	else{
		
		temp->next = head;
		head = temp;
		
	}
	size++;
}

template <class T>
void llist<T>::insertLast(T* c){
	
	node<T>* temp = new node<T>(c);
	
	if (head == NULL){
		
		head = temp;
		
	}
	else{
		
		node<T>* temp1 = head;
		while (temp1->next != NULL){
			
			temp1 = temp1->next;
			
			
		}
		temp1->next = temp;
			
	}
	size++;
}

template <class T>
bool llist<T>::insertPosition(T *c, int position){
	
	if (position >= 0 && position <= size) {
		
		int counter = 0;
		node<T>* temp = new node<T>(c);
		node<T>* temp1 = head;
		node<T>* temp2 = NULL;
		
		while (counter != position){
			temp2 = temp1;
			temp1 = temp1->next;
			counter++;
		}
	
		if (temp2 == NULL && position == 0){
			temp->next = head;
			head = temp;
		}
		else{
			temp->next = temp1;
			temp2->next = temp;
			
		}
		
		
	}
	
	
}





//if (cars.head == NULL){
//		
//		cars.head = new node(c.getMake(),c.getModel());
//		cars.size++;
//	}
//	else{
//		
//		node* temp = cars.head;
//		
//		while(temp->next != NULL ){
//			
//			temp = temp->next;
//		}
//		temp->next = new node(c.getMake(),c.getModel());
//		cars.size++;
//	}
