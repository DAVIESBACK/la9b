#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, amount;

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
	for(int year = 1; loan>0; year++){
		double interest = loan * (rate / 100.0);
		double total = loan + interest;
		double payment = (amount > total) ? total : amount;
		double new_balance = total - payment;

		cout << setw(13) << right << year;
        cout << setw(13) << right << loan;
        cout << setw(13) << right << interest;
        cout << setw(13) << right << total;
        cout << setw(13) << right << payment;
        cout << setw(13) << right << new_balance;
        cout << "\n";
		loan = new_balance;
		
	}
		
	
	return 0;
}
