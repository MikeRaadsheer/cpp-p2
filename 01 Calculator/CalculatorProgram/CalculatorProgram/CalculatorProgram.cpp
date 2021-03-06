// CalculatorProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
#include "Calculator.hpp"
#include "CalculatorProgram.h"

std::string SetOperator() {
	std::string op;

	std::cout << "Enter a operator (+,-,/,%,*): ";
	std::cin >> op;
	if (op.find_first_not_of("+-/%*") == std::string::npos) {
		return op;
	}
	else {
		std::cout << "ERROR: Invalid value " << op << std::endl;
		SetOperator();
	}
}

float SetNum(std::string var) {
	float num;

	std::cout << "Enter value '" << var << "': ";

	if (std::cin >> num) {
		return num;
	}
	else {
		std::cout << "ERROR: Invalid value " << num << std::endl;
		num = 0;
		SetNum(var);
	}
}

void Add() {
	float a, b;
	std::string oper;
	Calculator *myCalc = new Calculator(); 

	a = SetNum("A");
	oper = SetOperator();
	b = SetNum("B");

	float x = 0;
	
	//if statements because a switch doesn't work
	if (oper == "+") x = myCalc->Add(a, b);
	if (oper == "-") x = myCalc->Subtract(a, b);
	if (oper == "*") x = myCalc->Times(a, b);
	if (oper == "/") x = myCalc->Devide(a, b);
	if (oper == "%") x = myCalc->Modulo(a, b);

	std::cout << x << std::endl;

	std::string lock = "19815";
	while (lock == "19815") {
		std::cout << "Enter anything to continue..." << std::endl;
		std::cin >> lock;
	}
}

int main() {

	std::cout << "Hello World\n";
	std::string myString;

	Calculator *myCalc = new Calculator();
	std::list<Calculator*> *myList = new std::list<Calculator*>();
	myList->push_back(new Calculator());
	return 0;
}
