/*
Name: David Morris
ID: 201084474
Project: Problem 1077 Birthday Lookup
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){//main method
	
	const char* initInput;//variables
	char inputMonth[100];
	int inputMonthNum = 0;
	int inputDay = 0;
	int inputYear = 0;
	char* inputName;
	int queryDay = 0;
	int queryMonth = 0;
	int queryYear = 0;
	char* fillerVariable; 
	int absorber = 0;
	
	int x = 0;//iterators
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	
	scanf("%s", &initInput);//initial input
	
	int birthdayArray [100][2];//arrays
	char* outputArray [100];
	char* nameArray[100];
	
	while(strcmp(inputMonth, "QUERIES_START") != 0){//cycle round until condition is met
	
		scanf("%s", inputMonth);//input month
		
		if(strcmp(inputMonth, "QUERIES_START") == 0){//parameter to break out of the while loop
		
			break;//breaks out of the loop
		}
		
		if(strcmp(inputMonth, "January") == 0){//compares input to month name
			inputMonthNum = 1;
			
		} else if(strcmp(inputMonth, "Febuary") == 0){
			inputMonthNum = 2;//gives this variable a value depending on month input
			
		} else if(strcmp(inputMonth, "March") == 0){
			inputMonthNum = 3;
			
		} else if(strcmp(inputMonth, "April") == 0){
			inputMonthNum = 4;
			
		} else if(strcmp(inputMonth, "May") == 0){
			inputMonthNum = 5;
			
		} else if(strcmp(inputMonth, "June") == 0){
			inputMonthNum = 6;
			
		} else if(strcmp(inputMonth, "July") == 0){
			inputMonthNum = 7;
			
		} else if(strcmp(inputMonth, "August") == 0){
			inputMonthNum = 8;
			
		} else if(strcmp(inputMonth, "September") == 0){
			inputMonthNum = 9;
			
		} else if(strcmp(inputMonth, "October") == 0){
			inputMonthNum = 10;
			
		} else if(strcmp(inputMonth, "November") == 0){
			inputMonthNum = 11;
			
		} else if(strcmp(inputMonth, "December") == 0){
			inputMonthNum = 12;
			
		}
		birthdayArray[x][0] = inputMonthNum;//input variable value into array
		
		scanf("%d", &inputDay);//input day
		birthdayArray[x][1] = inputDay;//input variable value into array
		
		scanf("%d", &inputYear);//input year
		birthdayArray[x][2] = inputYear;//input variable value into array
		
		scanf("%s", &inputName);//input name
		nameArray[x] = inputName;//input variable value into array
		
		x = x + 1;//iteration to go to next level in array
		
		scanf("%s", &absorber);//absorbs a random line that is produced by the code (i dont know why this happens but this was a simple fix to the issue and does not impact the code)
	}
	
	while(queryDay != 33){//cycle round until condition is met

		scanf(" %d", &queryDay);//scans user input 
		
		if(queryDay == 33){//if input is empty then break out of loop
		
			break;
		}
		
		scanf(" %d", &queryMonth);//scans user input 
		
		scanf(" %d", &queryYear);//scans user input
		
		l = l + 1;//increase iterator
		
		for(i = 0; i >= x; i++){
			
			if(queryDay == birthdayArray[i][1] && queryMonth == birthdayArray[i][0] && queryYear == birthdayArray[i][2]){//if the query values match the input values then
				
				fillerVariable = nameArray[i];//the contents of this array cell will go into this variable
				
				outputArray[j] = fillerVariable;//the contents of the variable will be transferred to the output array
				
				j = j + 1;//increase iterator
				
			}
		}
		
		while(outputArray[j] != 0){
			
			queryDay = queryDay + 1;//this section methodically increases the value for the dates meaning that all dates will be covered when trying to find the first subsequent date
			
			if(queryDay > 31){
				
				queryMonth = queryMonth + 1;
				
				queryDay = 1;
			}
			
			if(queryMonth > 12){
				
				queryYear = queryYear + 1;
				
				queryMonth = 1;
			}
			
			if(queryYear > 99){
				
				queryYear = 0;
			}
			
			if(queryDay == birthdayArray[i][1] && queryMonth == birthdayArray[i][0] && queryYear== birthdayArray[i][2]){
				
				fillerVariable = nameArray[i];
				
				outputArray[j] = fillerVariable;

				j = j + 1;//increase iterator
				
			}
		}
	}
	
	for(k = 0; outputArray[k] != '\0'; k++){//this for loop is used to print out the output for the program
		
		printf("\n %d", outputArray[j]);
	}
}