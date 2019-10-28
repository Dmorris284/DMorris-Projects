// ConsoleApplication1.cpp : Defines the entry point for the console application.
//Author: David Morris
//Project: create Even ID number assembly code program
//Date: 02/11/2015
//Purpose of project: the purpose of this project is for the program to read a number, and then to loop a part of the program to gather
//information based on how many times the program loops.

#include "stdafx.h"


int main(void){
	char get[] = "Give me the first number";
	char getTwo[] = "Give me the second number";
	char posValue[] = "\nthe value is positive\n";
	char negValue[] = "\nthe value is negative\n";
	char zerValue[] = "\nthe value is zero\n";
	char valFormat[] = "%d"; //formats the string so it can be used with scanf.
	int posCount;
	int negCount;
	int zeroCount;
	int value;
	int value2;

	_asm {

		lea eax get
		push eax
		call printf
		add esp, 4
			
		lea eax, value
		push eax
		lea eax, valFormat			
		push eax
		call scanf
		add esp, 8

		lea eax getTwo
		push eax
		call printf
		add esp, 4

		lea eax, value2
		push eax
		lea eax, valFormat
		push eax
		call scanf
		add esp, 8

	mov ecx, value2
	next: inc value
	loop: next

	numPos : lea eax, posValue
		push eax
		call printf
		add esp, 4
		

	numNeg : lea eax, negValue
		push eax
		call printf
		add esp, 4
		

	numZer : lea eax, zerValue
		push eax
		call printf
		add esp, 4
		

	finish:
	}
    return 0;
}

