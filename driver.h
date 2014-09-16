#ifndef Included_DRIVER_H
#define Included_DRIVER_H
#include <vector>
#include <iostream>
#include <string>
#include "car.h"
#include "Person.h"
#include "llist.h"

using namespace std;


class driver:public Person{
	
	private:
		string licensed; //yy-mm-dd
		//vector<car> cars; 
		llist <car> cars;
		
	public:
		driver (string licensed, int age, int sin, string firstName, string lastName);
		string getLicensed() {return licensed;}
		void setLicensed() {this->licensed = licensed;}
		void addCar(car& c);
		bool isLicensed();
		void print(int age, string licensed, car c);
		string getFirstName () {return firstName;}
		string getLastName () {return lastName;}
		virtual const char* Order();
		friend ostream& operator<<(ostream& output, const driver& d1){
			output << d1.lastName << " " << d1.firstName << "-" << d1.age << endl 
			<< d1.licensed << endl;
			llist <car>l = d1.cars;
			for (int x = 0; x < l.length(); x++){
				car *c = l.at(x);
				output << (x+1) << ". " << c->getMake() << " " << c->getModel() << endl;
			}
		
			
		}
};
#endif 

