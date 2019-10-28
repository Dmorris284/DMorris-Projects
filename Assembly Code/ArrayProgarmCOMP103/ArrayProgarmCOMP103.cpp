// ArrayProgarmCOMP103.cpp : Defines the entry point for the console application.
//Author: David Morris
//Project: create Even ID number assembly code program
//Date: 02/12/2015
//Tutorial Group: C
//University E-mail Address: D.E.morris@liverpool.ac.uk
//Purpose of project: 

#include "stdafx.h"


int main(void) {
	char getScore[] = "Enter the mark for module: ";//
	char getErrorMessage[] = "Invalid Input, please try again: \n";
	char valFormat[] = "%d";//formats the string so it can be used with scanf.
	char highValueResult[] = "The highest result is: %d \n";//includes the largest value within the string
	int checkValue;
	int highValue = 0;

	int scoreArray[6];//array name
	scoreArray[0] = 0;//array value 1
	scoreArray[1] = 0;//array value 2
	scoreArray[2] = 0;//array value 3
	scoreArray[3] = 0;//array value 4
	scoreArray[4] = 0;//array value 5
	scoreArray[5] = 0;//array value 6

	_asm {

		lea ebx, scoreArray
		mov ebx, 0//set eax to 0
		mov ecx, 6

	scoreLoop : push ecx//loop for user input
			
		lea eax, getScore
		push eax
		call printf
		add esp, 4

	errorLoop://loop for re-entry of user input

		mov eax, 0//set eax to 0
		lea eax, scoreArray[ebx]
		push eax

		lea eax, valFormat
		push eax
		call scanf_s
		add esp, 8
		//seperation

		mov eax, 0//set eax to 0
		add eax, scoreArray[ebx]
		mov checkValue, eax

		cmp checkValue, 100//comparison parameter checker
		jg errorMessage
		cmp checkValue, 0//comparison parameter checker
		jl errorMessage
		jmp validValue

	errorMessage://error message response
		lea eax, getErrorMessage//prints the error message on screen
		push eax
		call printf
		add esp, 4
		jmp errorLoop//loops back to re-entry section

	validValue:
		add ebx, 4//moves to the nest slot in the array
		pop ecx
		loop scoreLoop//loops the input sequence untill array is full

		mov ecx, 6
		lea ebx, scoreArray
		mov ebx, 0//set ebx to 0
		mov highValue, 0//set highValue to 0
		//Seperation

	compareLoop: push ecx
		mov eax, 0//set eax to 0
		mov eax, scoreArray[ebx]//moves what is stored in the array to the eax
		cmp eax, highValue//compares the values in the array to another
		jl endLoop
		mov highValue, eax//moves whatever is stored in eax into highValue

	endLoop: add ebx, 4
		pop ecx
		loop compareLoop//loops the compare loop 
		jg highestValue//jumps to highestValue
		jmp finish

	highestValue : mov eax, highValue//moves the value of highValue into the eax
		push eax
		lea eax, highValueResult//prints out the message and what the highest value is.
		push eax
		call printf
		add esp, 8
		jmp finish//jump to the finish program

			finish ://finish the program
	}
	return 0;
}

