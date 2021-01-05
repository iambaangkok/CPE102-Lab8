#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double initialLoan, interestRate, payableAmountPerYear, currentLoan;

	cout << "Enter initial loan: ";
	cin >> initialLoan;
	currentLoan = initialLoan;
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate;
	cout << "Enter amount you can pay per year: ";
	cin >> payableAmountPerYear;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	long long int year = 1;
	double interest;
	while(currentLoan > 0){
		cout << setw(13) << left << year;
		cout << setw(13) << left << fixed << setprecision(2) << currentLoan;
		interest = currentLoan*interestRate/100;
		cout << setw(13) << left << fixed << setprecision(2) << interest;
		currentLoan = currentLoan+interest;
		cout << setw(13) << left << fixed << setprecision(2) << currentLoan;
		cout << setw(13) << left << fixed << setprecision(2) << ((currentLoan<=payableAmountPerYear)? currentLoan : payableAmountPerYear);
		cout << setw(13) << left << fixed << setprecision(2) << ((currentLoan<=payableAmountPerYear)? 0 : currentLoan-payableAmountPerYear);
		cout << endl;

		currentLoan = ((currentLoan<payableAmountPerYear)? 0 : currentLoan-payableAmountPerYear);
		year++;
	}

	
	
	
	return 0;
}
