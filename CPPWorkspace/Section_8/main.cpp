#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

void convert_to_Upper(char &choice)
{
	choice = toupper(choice) ;
}
void display_menu()
{
	cout << "P - Print numbers" << endl ;
	cout << "A - Add a number" << endl ;
	cout << "M - Display mean of numbers" << endl ;
	cout << "S - Display the smallest number" << endl ;
	cout << "L - Display the largest number" << endl ;
	cout << "Q - Quit\n" << endl ;
	cout << "Enter your choice : " ;
}

void print_vector(vector<int> list)
{
	if(list.size() != 0)
		{
			cout << "[ " ;
			for(auto element : list)
				cout << element << " " ; 
			cout << "]\n" << endl ;
		}
		else
			cout << "[] - the list is empty\n" << endl ;
}

void add_num(vector<int> &list)
{
	int add_num {} ;
	cout << "Enter integer to add : " ;
	cin >> add_num ;
	list.push_back(add_num) ;
	cout << add_num << " added\n" << endl ;
}

void mean_nums(vector<int> list)
{
	if(list.size() != 0)
	{
		double average = accumulate(list.begin(), list.end(), 0.0)/ list.size();
		cout << "Calculated Mean : "<< average << "\n" << endl ;
	}
	else
		cout << "Unable to calculate mean - no data\n" << endl ;
}

void smallest_nums(vector<int> list)
{
	if(list.size() != 0)
	{
		int smallest {list[0]} ;
		for(auto element : list)
			if(element < smallest)
				smallest = element ;
		cout << "The smallest number is " << smallest << "\n" << endl ;
	}
	else
		cout << "Unable to determine the smallest number - list is empty\n" << endl ;
}

void largest_nums(vector<int> list)
{
	if(list.size() != 0)
	{
		int largest {list[0]} ;
		for(auto element : list)
			if(element > largest)
				largest = element ;
		cout << "The largest number is " << largest << "\n" << endl ;
	}
	else
		cout << "Unable to determine the largest number - list is empty\n" << endl ;
}

int main()
{
	vector <int> list {} ;
	char choice {} ;
	do
	{
		display_menu();
		cin >> choice ;
		convert_to_Upper(choice) ;
		if(choice == 'P')
			print_vector(list) ;
			
		else if(choice == 'A')
			add_num(list) ;
			
		else if(choice == 'M')
			mean_nums(list) ;
			
		else if(choice == 'S')
			smallest_nums(list) ;
		
		else if(choice == 'L')
			largest_nums(list) ;
			
		else if(choice == 'Q')
			cout << "GoodBye !! "<< endl ;
		
		else
			cout << "Unknown Selection, please try again !\n" << endl ;
			
	}while(choice != 'Q') ;
	return 0 ;
	
}