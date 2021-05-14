#include <iostream>

using namespace std ;
int main()
{
	int cents {0} ;
	cout << "Enter an amount in cents : " ;
	cin >> cents  ;
	
	cout << "=================\n" << endl ;
	
	cout << "Dollars : " << cents/100 << endl ;
	cents %= 100 ;
	
	cout << "Quarters : " << cents/25 << endl ;
	cents %= 25 ;
	
	cout << "Dimes : " << cents/10 << endl ;
	cents %= 10 ;
	
	cout << "Nickels : " << cents/5 << endl ;
	cents %= 5 ;
	
	cout << "Pennies : " << cents << endl ;
	
	return 0;
}