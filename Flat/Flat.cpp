#include "Flat.h"

Flat::Flat(int area) : area_M2(area) {}


Flat::Flat() : Flat::Flat(0) {}


bool Flat::operator==(const Flat& obj) const{
	if (this->area_M2 == obj.area_M2) {
		return true;
	}
	else {
		return false;
	}
}


Flat const Flat::operator=(const Flat& obj){
	if (this == &obj) {
		return *this;
	}

	this->area_M2 = obj.area_M2;
}

bool Flat::operator>(const Flat& obj){
	if (this == &obj) {
		return false;
	}

	if (this->area_M2 > obj.area_M2) {
		return true;
	}

	return false;
}


bool Flat::operator<(const Flat& obj) {
	if (this == &obj) {
		return false;
	}

	if (this->area_M2 < obj.area_M2) {
		return true;
	}

	return false;
}