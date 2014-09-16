#ifndef Included_CAR_H
#define Included_CAR_H
#include <iostream>
#include <fstream>
#include <string>



using namespace std; 

class car{
	
	private:
		string make;
		string model;
		
	public:
		car (string make, string model);
		car ();
		string getMake() {return make;}
		string getModel() {return model;}
		void setMake(string make) {this->make = make;}
		void setModel(string model) {this->model = model;}
		friend ostream& operator<<(ostream& output, car& c1){
			output << c1.make << c1.model << endl;
			return output;
		}
//this goes in main.cpp
//		string carData(){
//			ifstream myfile ("cars.txt");
//			if (myfile.is_open()){
//				
//				while (getline (myfile,line)){
//					
//					make = ;
//					model = ;
					
				//}
			//}
				 
		//}         
		
};
#endif
