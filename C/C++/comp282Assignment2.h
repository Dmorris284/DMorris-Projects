//Name: David Morris
//ID: 
//Program Description:



#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
main(){
	
	int optionSelect = 0;
	int optionDelete = 0;
	int i = 0;
	int j = 0;
	string nameEntry;
	string telEntry;
	int offNumEntry;
	
	vector<string> nameVector;
	nameVector.resize(100);
	
	vector<int> offNumVector;
	offNumVector.resize(100);
	
	vector<string> telNumVector;
	telNumVector.resize(100);
	
	while(optionSelect != 4){
		
		std::cout << "Please Choose an option:\n";
		std::cout << "1. Add Entry:\n";
		std::cout << "2. List Entries:\n";
		std::cout << "3. Delete Entry:\n";
		std::cout << "4. Quit Program:\n";
		
		cin >> optionSelect;
		
		if(optionSelect == 1){
			
			std::cout << "Please enter the person's details:\n";
			
			cin >> nameEntry;
			nameVector[j] = nameEntry;
			
			cin >> telEntry;
			telNumVector[j] = telEntry;
			
			cin >> offNumEntry;
			offNumVector[j] = offNumEntry;
			
			j++;
			
		} else if(optionSelect == 2){
			
			std::cout << "The staff list is:\n";
			
			for(int i=0; i < nameVector.size(); i++)
				cout << nameVector[i] << '_';
				cout << telNumVector[i] << '_';
				cout << offNumVector[i] << '\n';
			
			
		} else if(optionSelect == 3){
			
			sdt::cout << "Please enter the index to remove:\n";
			
			cin >> optionDelete;
			
			nameVector.erase (nameVector[optionDelete]);
			telNumVector.erase (telNumVector[optionDelete]);
			offNumVector.erase (offNumVector[optionDelete]);
			
		} else {
			
			break;
		}
	}
	
}