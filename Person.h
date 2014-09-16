#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>




using namespace std;

class Person{
	
	protected:
		int age;
		int sin;
		string firstName;
		string lastName;
		
	public:
		Person (int age, int sin, string firstName, string lastName);
		Person (const Person&);
		int getAge () {return age;}
		int getSin () {return sin;}
		string getFirstName () {return firstName;}
		string getLastName () {return lastName;}
		void setAge (int age) {this->age = age;}
		void setSin (int sin) {this->sin = sin;}
		void setFirstName (string firstName) {this->firstName = firstName;}
		void setLastName (string lastName) {this->lastName = lastName;}
		virtual const char* Order() = 0;// pure virtual function
		friend ostream& operator<<(ostream& output, const Person& p1){
			return output << p1.firstName << " " << p1.lastName << " " << p1.age << endl;
		}
	
};
	
#endif


