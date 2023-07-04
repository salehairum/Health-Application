#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Medicine.h"
using namespace std;

class Pharmacy {
	friend class Admin;
private:
	//attributes
	double balance;
	Medicine m[10];
public:
	//default constructor
	Pharmacy() {}
	//parameterized constructor
	void readMedicineFile();

	//getter of medicine at required index
	Medicine getMedicine(int)const;

	//setter of balance
	void setBalance(const double b);
	//getter of balance
	double getbalance()const;

	//member functions
	//display medicine details
	void displaymedicine();
	//decrement medicine stock when bought
	void decrementStock(int);
	//if user does not have enough money to buy medicine, stock is re-incremented
	void incrementStock(int);
	//this function handles all functions for purchasing medicine
	int purchasingMed();

};