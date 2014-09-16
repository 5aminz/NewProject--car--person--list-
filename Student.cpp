#include "Student.h"


Student::Student (string major, int studentNo, int age, int sin, string firstName, string lastName):Person(age, sin, firstName, lastName){
	
	this->major = major;
	this->studentNo = studentNo;
	
}


const char* Student::Order(){
	
	return (getLastName() + "," + getFirstName()).c_str();
	 
}
