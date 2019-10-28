//Name: David Morris
//ID: 201084474

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    
    int optionSelect = 0;//variable
    int optionDelete = 0;//variable
    int i = 0;//iterator
    int j = 0;//iterator
    string nameEntry;//variable
    string telEntry;//variable
    int offNumEntry;//variable
    
    vector<string> nameVector;//vector for names
    nameVector.resize(100);//vector size set to 100
    
    vector<int> offNumVector;//vector for office numbers
    offNumVector.resize(100);//vector size set to 100
    
    vector<string> telNumVector;//vector for telephone numbers
    telNumVector.resize(100);//vector size set to 100
    
    while(optionSelect != 4){//while loop to keep user in the option selection menu until user quits
        
        cout << "Please Choose an option:\n";//displays menu to user
        cout << "1. Add Entry:\n";
        cout << "2. List Entries:\n";
        cout << "3. Delete Entry:\n";
        cout << "4. Quit Program:\n";
        
        cin >> optionSelect;//gets user input
        
        if(optionSelect == 1){//if option 1
            
            cout << "Please enter the person's details:\n";//displays text to user
            
            cin >> nameEntry;//gets user input
            nameVector[j] = nameEntry;
            
            cin >> telEntry;//gets user input
            telNumVector[j] = telEntry;
            
            cin >> offNumEntry;//gets user input
            offNumVector[j] = offNumEntry;
            
            j++;//increases iterator by 1
            
        } else if(optionSelect == 2){//if option 2
            
            cout << "The staff list is:\n";//displays text to user
            
            for(int i=0; i < telNumVector.size() + 1; i++)
                cout << nameVector[i] << '\n';//displays entry to user
                cout << telNumVector[i] << '\n';//displays entry to user
                cout << offNumVector[i] << '\n';//displays entry to user
            
            
        } else if(optionSelect == 3){//if option 3
            
            cout << "Please enter the index to remove:\n";//displays text to user
            
            cin >> optionDelete;//gets user input
            
            nameVector.erase(nameVector.begin() + optionDelete);//erases the entry from vector
            telNumVector.erase(telNumVector.begin() + optionDelete);//erases the entry from vector
            offNumVector.erase(offNumVector.begin() + optionDelete);//erases the entry from vector
            
        }
    }
}
