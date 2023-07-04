#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Account.h"
#include "Admin.h"
using namespace std;

class BloodDonator :protected Person {
	friend class Admin;
private:
	//attributes
	string BGroups[8];
	int TB_Bottles[8];   //Total Bottles
public:
	//Default Constructor
	BloodDonator() {
		BGroups[0] = "A+";
		BGroups[1] = "A-";
		BGroups[2] = "B+";
		BGroups[3] = "B-";
		BGroups[4] = "AB+";
		BGroups[5] = "AB-";
		BGroups[6] = "O+";
		BGroups[7] = "O-";

		TB_Bottles[0] = 20;
		TB_Bottles[1] = 25;
		TB_Bottles[2] = 30;
		TB_Bottles[3] = 22;
		TB_Bottles[4] = 35;
		TB_Bottles[5] = 27;
		TB_Bottles[6] = 12;
		TB_Bottles[7] = 15;
	};

	//Functions
	//check conditions for blood donation
	int BloodCollectionCheck(string, int, bool&, bool&);
	//decrement bottles once blood is donated
	void DecrementNoOfBottles(string, int);
	//display details of blooddonator
	void displayDetails()const;

	friend class Admin;
};