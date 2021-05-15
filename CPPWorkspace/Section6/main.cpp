#include <iostream>
#include <vector>
#include <numeric>

using namespace std ;

int main()
{
	vector <int> list {} ;
	char choice {} ;
	do
	{
		cout << "P - Print numbers" << endl ;
		cout << "A - Add a number" << endl ;
		cout << "M - Display mean of numbers" << endl ;
		cout << "S - Display the smallest number" << endl ;
		cout << "L - Display the largest number" << endl ;
		cout << "Q - Quit\n" << endl ;
		cout << "Enter your choice : " ;
		cin >> choice ;
		
//		execution for P
		if(choice == 'P' || choice == 'p')
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

//		execution for A
		else if(choice == 'A' || choice == 'a')
		{
			int add_num {} ;
			cout << "Enter integer to add : " ;
			cin >> add_num ;
			list.push_back(add_num) ;
			cout << add_num << " added\n" << endl ;
		}	

//		execution for M
		else if(choice == 'M' || choice == 'm')
		{
			if(list.size() != 0)
			{
				double average = accumulate(list.begin(), list.end(), 0.0)/ list.size();
				cout << "Calculated Mean : "<< average << "\n" << endl ;
			}
			else
				cout << "Unable to calculate mean - no data\n" << endl ;
		}
		
//		execution for S
		else if(choice == 'S' || choice == 's')
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
		
//		execution for L
		else if(choice == 'L' || choice == 'l')
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
		
//		execution for Q
		else if(choice == 'Q' || choice == 'q')
		{
			cout << "Goodbye!" << endl ;
		}
		
//		execution for invalid choice
		else
			cout << "Unknown Selection, please try again!\n" << endl ;
	}while(choice != 'Q' && choice != 'q') ;
	
	return 0;
}