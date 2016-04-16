#include <iostream>

using namespace std;

double fee = 0.50;
double balance = 4000;
int choice;
double x;
double newBalance;
int main(){
	cout << "Welcome to bank" << endl;
	cout << "Current balance: " << endl;
	cout << "How much would you like to withdrawal " << endl;
	
	cin >> x; 
	if (x <= 2000){
		newBalance = balance - x - fee;
		cout << "Old Balance: " << balance << endl;
		cout << "New Balance " << newBalance << endl;
		cout << "Thank you, Have a nice day " << endl;
	}
	else
	{
		cout << "Sorry. You can't withdraw more than $2000.00 ";
	}

	return 0;
}
