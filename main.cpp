#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "Person.h"
#include "Student.h"
#include "car.h"
#include "driver.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Person* p1;//(25,232423432,"John","Smith");
	Student s1("Math", 21414412,25,23423423,"Jane","N");
	car c1 ("ford","focus");
	p1 = &s1;
	cout << "line 16 " << p1->Order() << endl;
	driver d1 ("14-01-01", 24, 0, "Jack", "Black");
	cout << *p1;
	cout << s1;
	cout << c1;
	
	string line;
	ifstream file ("cars.txt");
	int n;
	car *myCars;
	if(file.is_open()){
		int lineNo = 0;
		int j = 0;
		while(getline(file, line)){
			if (lineNo == 0){
				n = atoi(line.c_str());
				myCars = new car[n];
			}
			else{
				//lineNo == 2
				if ((lineNo%2) == 1){
					myCars[j].setMake(line);
				}
				else {
					myCars[j].setModel(line);
					j++;
				}
			}
		lineNo++;	
		}
		file.close();
		for (int x = 0; x < n; x++){
			cout << myCars[x].getMake() << " " << myCars[x].getModel() << endl;
		}
	}
//	for (int x = 0; x < n; x++){
//		d1.addCar(myCars[x]);
//	}
 	cout << d1;
 	getchar();
	return 0;
} 













