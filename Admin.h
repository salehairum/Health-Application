#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Account.h"
#include "Doctor.h"
#include "Patient.h"
#include "Pharmacy.h"
#include "BloodDonator.h"
#include "DietPlan.h"
using namespace std;

class Doctor;
class Patient;
class Pharmacy;
class BloodDonator;
class DietPlan;

class Admin :protected Person { 
public:
	// default constructor
	Admin() {}

	// parameterized constructor
	Admin(char fn[20], char ln[20], char g, int a, int id) :Person(fn, ln, g, a, id) {}

	//Member Fuctions
	
	//functions related to accounts
	//creates a new account for user
	void createAccount(Patient& p);
	//logs in to already existing account
	void loginToAccount(Patient& p);
	
	//functions related to making appointments with doctor
	//find doctor of user's choice
	bool findDoctor(char[20], Doctor d[12], int chosenDoc[3]);
	//check whether doctor is available at that time or not
	bool checkAvailability(Doctor d, char);
	//if doctor is available, schedule appointment
	bool scheduleAppointment(Doctor d[2], int, int chosenDoc[3]);

	//functions related to billing
	//transfer of money from patient to doctor after scheduling appointment
	void patientBilling(Patient& p, Doctor& d, int);
	//transfer of money from patient to pharmacy after medicines are purchased
	void medicineBilling(Patient& p, Pharmacy& ph, int);
	
	//function related to blood donation
	//links bloodDonator functions to donate blood
	void acceptDonation(BloodDonator& b1);

	//function to display diet plan
	void displayDietPlanDetails(DietPlan d[7], string);
	
	//function to display admin data
	void displayDetails()const;
};