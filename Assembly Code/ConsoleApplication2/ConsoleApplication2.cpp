// ConsoleApplication1.cpp : Defines the entry point for the console application.
//Author: David Morris
//Project: create Even ID number assembly code program
//Date: 02/11/2015
//Purpose of project: the purpose of this project is for the program to read a number, and then to loop a part of the program to gather
//information based on how many times the program loops.

#include "stdafx.h"


int main(void) {
	char get[] = "Give me the first number";
	char getTwo[] = "Give me the second number";
	char posValue[] = "\nthe value is positive\n";
	char negValue[] = "\nthe value is negative\n";
	char zerValue[] = "\nthe value is zero\n";
	char valFormat[] = "%d"; //formats the string so it can be used with scanf.
	int posVal;
	int negVal;
	int zeroVal;
	int value;
	int value2;

	_asm {
		lea eax, get//asks the user for the first value
			push eax
			call printf
			add esp, 4

			lea eax, value
			push eax
			lea eax, valFormat
			push eax
			call scanf_s//the user enters the value
			add esp, 8

			lea eax, getTwo//asks the user for a second value
			push eax
			call printf
			add esp, 4

			lea eax, value2
			push eax
			lea eax, valFormat
			push eax
			call scanf_s//the user enters the value
			add esp, 8

			mov ecx, value2//calls this value as the amount of times the loop will happen
			next : inc value//adds 1 to the value untill the loop has been completed
			loop next//loops the above statement untill contition is met
			cmp eax,0
			jg numPos
			jl numNeg

			numZer : lea eax, zerValue
			push eax
			call printf
			add esp, 4
			jmp finish

			numPos : lea eax, posValue
			push eax
			call printf
			add esp, 4

			lea eax, value
			push eax
			call printf
			add esp, 4
			jmp finish

			numNeg : lea eax, negValue
			push eax
			call printf
			add esp, 4
			jmp finish




			finish :
	}
	return 0;
}


