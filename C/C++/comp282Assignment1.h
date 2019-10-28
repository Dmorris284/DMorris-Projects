//Name: David Morris
//ID: 
//Program Description:



#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
main(){
	
	int optionSelect = 0;
	int i = 0;
	int j = 0;
	string entry;
	
	vector<string> entryVector;
	entryVector.resize(100);
	
	while(optionSelect != 3){
		
		std::cout << "Please Choose an option:\n";
		std::cout << "1. Add Entry:\n";
		std::cout << "2. List Entries:\n";
		std::cout << "3. Quit Program:\n";
		
		cin >> optionSelect;
		
		if(optionSelect == 1){
			
			std::cout << "Please enter the person's details:\n";
			
			cin >> entry;
			
			entryVector[j] = entry;
			j++;
			
			
		} else if(optionSelect == 2){
			
			std::cout << "The staff list is:\n";
			
			for(int i=0; i < entryVector.size(); i++)
				cout << entryVector[i] << '\n';
			
		} else {
			
			break;
		}
	}
	
}