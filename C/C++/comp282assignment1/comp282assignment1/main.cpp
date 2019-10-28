//Name: David Morris
//ID: 201084474

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    
    int optionSelect = 0;//variable
    int j = 0;//iterator
    string entry;//variable
    
    vector<string> entryVector;//vector used to store the information
    entryVector.resize(100);//sets vector size to 100
    
    while(optionSelect != 3){//while loop to keep user in the option selection menu until user quits
        
        cout << "Please Choose an option:\n";//displays menu to user
        cout << "1. Add Entry:\n";
        cout << "2. List Entries:\n";
        cout << "3. Quit Program:\n";
        
        cin >> optionSelect;//gets user input
        
        if(optionSelect == 1){//if option 1
            
            cout << "Please enter the person's details:\n";//displays text to user
            
            cin >> entry;//gets user input
            
            entryVector[j] = entry;//stores user input into vector position j
            j++;//increases position of iterator
            
        } else if(optionSelect == 2){//else if option 2
            
            cout << "The staff list is:\n";//displays text to user
            
            for(int i=0; i < entryVector.size(); i++)//for loop to cycle through entries within the vector
                cout << entryVector[i] << '\n';//displays entry to user
            
        }
    }
}
