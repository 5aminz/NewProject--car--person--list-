#ifndef Included_STUDENT_H
#define Included_STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"


using namespace std;

class Student:public Person{
	
	private:
		string major;
		int studentNo;
	
	public:
		Student (string major, int studentNo, int age, int sin, string firstName, string lastName);
		string getMajor () {return major;}
		int getStudentNo () {return studentNo;}		
		void setMajor (string major) {this->major = major;}
		void setStudentNo (int studentNo) {this->studentNo = studentNo;}
		virtual const char* Order();
		friend ostream& operator<<(ostream& output, Student& s1){
			output << s1.major << s1.studentNo << s1.firstName << "," << s1.lastName << s1.age << s1.sin << endl;
			return output;
		}

};
#endif
