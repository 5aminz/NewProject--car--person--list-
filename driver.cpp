#include "driver.h"

driver::driver (string licensed, int age, int sin, string firstName, string lastName):Person(age, sin, firstName, lastName){
	
	this->licensed = licensed;
	
}

void driver::addCar(car& c){ 

	cars.insertLast(&c);
	
}

bool driver::isLicensed(){
	
	if (age >= 16){
		return true;	
	}
}


void driver::print(int age, string licensed, car c){
	
	cout << age << licensed << c << endl;
}

const char* driver::Order(){
	
	return (getFirstName() + "-" + getLastName()).c_str();
}

