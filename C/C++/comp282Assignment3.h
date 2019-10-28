//Name: David Morris
//ID: 
//Program Description:



#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class person{
	
	string nameVar;
	
	vector<string> studentNameVector;
	
	vector<string> staffNameVector;
}

class Staff: public person{
	
	int offNum;
	string telNum;
	
	vector<int> offNumVector;
	
	vector<string> telNumVector;
	
}
 
 class student: public person{
	 
	 string studentNum;
	 
	 vector<string> studentVector
	 
 } 
 
 main(){
	
	int optionSelect = 0;
	int i = 0;
	int j = 0;
	string staffName;
	string studentName;
	string studentNumber;
	string staffTelNum;
	int staffOffNum = 0;
	int deleteEntry = 0;
	int optionDelete = 0;
	
	
	while(optionSelect != 5){
		
		std::cout << "Please Choose an option:\n";
		std::cout << "1. Add Staff:\n";
		std::cout << "2. Add Student:\n";
		std::cout << "3. List All:\n";
		std::cout << "4. Remove Person:\n";
		std::cout << "5. Quit Program:\n";
		
		cin >> optionSelect;
		
		if(optionSelect == 1){
			
			std::cout << "Please enter the staff's details:\n";
			
			cin >> staffName;
			cin >> staffTelNum;
			cin >> staffOffNum;
			
			
		} else if(optionSelect == 2){
			
			std::cout << "Please enter the sudent's details:\n";
			
			cin >> studentName;
			cin >> studentNumber;
			
		} else if(optionSelect == 3){
			
			std::cout << "The staff list is:\n";
			
			for(int i=0; i < staffNameVector.size(); i++)
				cout << staffNameVector[i] << '_';
				cout << offNumVector[i] << '_';
				cout << telNumVector[i] << '\n';
				cout << studentNameVector[i] << '_';
				cout << studentVector[i] << '\n';
			
		} else if(optionSelect == 4){
			
			sdt::cout << "Do you wish to remove a staff(1) or student(2):\n";
			
			cin >> deleteEntry;
			
			if(deleteEntry == 1){
				
				sdt::cout << "Please enter the index to remove:\n";
				
				staffNameVector.erase (staffNameVector[optionDelete]);
				offNumVector.erase (offNumVector[optionDelete]);
				telNumVector.erase (telNumVector[optionDelete]);
				
			} else if(deleteEntry == 2){
				
				sdt::cout << "Please enter the index to remove:\n";
			
			studentNameVector.erase (studentNameVector[optionDelete]);
			studentVector.erase (studentVector[optionDelete]);
			
				
			} else {
				
				break;
			}
			
			
			
			
			
			
		} else {
			
			break;
		}
	}
}



