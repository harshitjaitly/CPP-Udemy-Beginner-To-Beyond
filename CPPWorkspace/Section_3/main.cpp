#include <iostream>
using namespace std ;
int main()
{
	int small_rooms {0} ;
	int large_rooms {0} ;
	
	cout << "Enter number of small rooms : " ;
	cin >> small_rooms ;
	cout << "Enter number of large rooms : " ;
	cin >> large_rooms ;
	
	const double price_small {25.0} ;
	const double price_large {35.0} ;
	const double tax_rate {0.06} ;
	const int validity_days {30} ;
	
	double cost = price_small*small_rooms + price_large*large_rooms ;
	double tax = tax_rate*cost ;
	double total_estimate = cost + tax ;  
	
	cout << "\nCarpet Cleaning Estimate" << endl ;
	cout << "\nNumber of Small Rooms : " << small_rooms << endl ;
	cout << "Number of Large Rooms : " << large_rooms << endl ;
	cout << "\nPrice Per Small Room : " << price_small << endl ;
	cout << "Price Per Large Room : " << price_large << endl ;
	cout << "\nCost : $" << cost << endl ;
	cout << "Tax : $" << tax << endl ;
	cout << "================================" << endl ;
	cout << "Total Cost : $" << total_estimate << endl ;
	cout << "Above estimate valid for " << validity_days <<" days" << endl ;
	
	return 0 ;
}