#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	long double loan;
	double rate;
	long double amount;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << right << "EndOfYear#"; 
	cout << setw(13) << right << "PrevBalance"; 
	cout << setw(13) << right << "Interest"; 
	cout << setw(13) << right << "Total";
	cout << setw(13) << right << "Payment";
	cout << setw(13) << right << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << right << 1; 
	cout << setw(13) << right << 1000.0;
	cout << setw(13) << right << 50.0;
	cout << setw(13) << right << 1050.0;
	cout << setw(13) << right << 100.0;
	cout << setw(13) << right << 950.0;
	cout << "\n";	
	
	return 0;
}
