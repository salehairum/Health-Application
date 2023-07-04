#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Doctor.h"
#include "Account.h"
#include "Admin.h"
#include "Pharmacy.h"
using namespace std;

class Doctor;
class Pharmacy;

class Patient :protected Person {
	friend class Admin;
private:
	//attributes
	double balance;
	Account acc;
	int chooseDoctor();
	bool checkValidity(double amount);
public:
	// default constructor
	Patient() {
		age = 0;
		srand(time(0));
		//for random id generation
	}

	// parameterized constructor
	Patient(char fn[20], char ln[20], char g, int a, int id) :Person(fn, ln, g, a, id) {
		Patientmenu();
	}

	//getters/accessors
	const char* getAccountEmail()const;
	long long int getAccountContact()const;
	const char* getAccountUsername()const;
	Account getAccount()const;

	//setters/mutators
	void setAccountEmail(const char* e);
	void setAccountContact(const long long int c);

	//Member Fuctions
	//take input of patient's data
	void input();
	//patient can choose what to do in application
	int Patientmenu();
	//input patient report after scheduling of report
	void inputreport();
	//function that initiates appointment scheduling process
	bool makeAppointment(Doctor d[12], Admin a, int chosenDoc[3]);
	//operator overloading for money transfer
	bool operator+(Doctor& d);
	//functions to display details
	void displayDetails()const;
};