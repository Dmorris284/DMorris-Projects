//Name: David Morris
//ID: 201084474

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class person{//class
    
    string nameVar;//variable
    
    vector<string> studentNameVector;//vector
    
    vector<string> staffNameVector;//vector
};

class Staff: public person{//class that inherits aspects from person
    
    int offNum;//variable
    string telNum;//variable
    
    vector<int> offNumVector;//vector
    
    vector<string> telNumVector;//vector
    
};

class student: public person{//class that inherits aspects from person
    
    string studentNum;//variable
    
    vector<string> studentVector;//vector
    
};

int main(){
    
    int optionSelect = 0;//variable
    int i = 0;//iterator
    int j = 0;//iterator
    string staffName;//variable
    string studentName;//variable
    string studentNumber;//variable
    string staffTelNum;//variable
    int staffOffNum = 0;//variable
    int deleteEntry = 0;//variable
    int optionDelete = 0;//variable
    
    
    while(optionSelect != 5){//while loop to keep user in the option selection menu until user quits
        
        cout << "Please Choose an option:\n";//displays menu to user
        cout << "1. Add Staff:\n";
        cout << "2. Add Student:\n";
        cout << "3. List All:\n";
        cout << "4. Remove Person:\n";
        cout << "5. Quit Program:\n";
        
        cin >> optionSelect;
        
        if(optionSelect == 1){//if option 1
            
            cout << "Please enter the staff's details:\n";//displays text to user
            
            cin >> staffName;//gets user input
            cin >> staffTelNum;//gets user input
            cin >> staffOffNum;//gets user input
            
            
        } else if(optionSelect == 2){//if option 2
            
            cout << "Please enter the sudent's details:\n";//displays text to user
            
            cin >> studentName;//gets user input
            cin >> studentNumber;//gets user input
            
        } else if(optionSelect == 3){//if option 3
            
            cout << "The staff list is:\n";//displays text to user
            
            for(int i=0; i < staffNameVector.size(); i++)
				
                cout << staffNameVector[i] << '_';//displays entry to user
				cout << offNumVector[i] << '_';//displays entry to user
				cout << telNumVector[i] << '\n';//displays entry to user
				cout << studentNameVector[i] << '_';//displays entry to user
				cout << studentVector[i] << '\n';//displays entry to user
            
        } else if(optionSelect == 4){//if option 4
            
            cout << "Do you wish to remove a staff(1) or student(2):\n";//displays text to user
            
            cin >> deleteEntry;//gets user input
            
            if(deleteEntry == 1){//if option 1
                
                cout << "Please enter the index to remove:\n";//displays text to user
                
                nameVector.erase(nameVector.begin() + optionDelete);//erases the entry from vector
                telNumVector.erase(telNumVector.begin() + optionDelete);//erases the entry from vector
                offNumVector.erase(offNumVector.begin() + optionDelete);//erases the entry from vector
                
            } else if(deleteEntry == 2){//if option 2
                
                cout << "Please enter the index to remove:\n";//displays text to user
                
                studentNameVector.erase (studentNameVector[optionDelete]);//erases the entry from vector
                studentVector.erase (studentVector[optionDelete]);//erases the entry from vector
                
            }
        }
    }
}
