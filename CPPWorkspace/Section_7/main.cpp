#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
	int key ;
	string message ;
	cout << "Enter message to encrypt : " ;
	getline(cin, message);
	cout << "Enter KEY to encrypt : " ;
	cin >> key ;
	string cipher = alpha.substr(key,26-key) + alpha.substr(0,key) +alpha.substr(26+key)+alpha.substr(26,key) ;
	
	cout << "\n===============ENCRYPTING==============" << endl;
	string encrypt ;
	for(auto x : message)
	{
		size_t pos = alpha.find(x) ;
		if(pos != string::npos)
			encrypt+=cipher.at(pos) ;
		else
			encrypt+=x ;
	}
	cout << "Encrypted Message : " << encrypt << endl ;
	
	cout << "\n===============DECRYPTING==============" << endl;
	
	string decrypt ;
	for(auto x : encrypt)
	{
		size_t pos = cipher.find(x) ;
		if(pos != string::npos)
			decrypt+=alpha.at(pos) ;
		else
			decrypt+=x ;
	}
	cout << "Decrypted Message : " << decrypt << endl ;
	
	return 0;
	
}