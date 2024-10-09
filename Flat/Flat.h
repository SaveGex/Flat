#pragma once
class Flat{
private: 
	int area_M2;
public:
	Flat(int area);
	Flat();

	bool operator==(const Flat& obj)const;
	Flat const operator=(const Flat& obj);
	bool operator>(const Flat& obj);
	bool operator<(const Flat& obj);

};

