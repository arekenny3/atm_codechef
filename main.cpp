#include <iostream>

using namespace std;

double fee = 0.50;
double balance = 4000;
int choice;
int x;
double newBalance;
int main(){
	cout << "Welcome to bank" << endl;
	cout << "Current balance: " << endl;
	cout << "How much would you like to withdrawal " << endl;

	cin >> x;
	if ((x % 5==0) && (x<=2000) ){
		newBalance = balance - x - fee;
		cout << "Old Balance: " << balance << endl;
		cout << "New Balance " << newBalance << endl;
		cout << "Thank you, Have a nice day " << endl;
	}
	else
	{
		cout << "Sorry. Either you can't withdraw more than $2000.00 or withdraw amount needs to be divisible by 5. ";
	}

	return 0;
}
