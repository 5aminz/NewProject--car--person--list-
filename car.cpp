#include "car.h"

car::car(string make, string model){
	this->make = make;
	this->model = model;
}

car::car(){
	this->make = "";
	this->model = "";
}
