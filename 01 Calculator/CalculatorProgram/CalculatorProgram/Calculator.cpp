#include "stdafx.h"
#include "Calculator.hpp"
#include <math.h>

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}


// Adds A to B and returns the result
float Calculator::Add(float a, float b)
{
	return a + b;
}


// Subtracts B from A and returns the result
float Calculator::Subtract(float a, float b)
{
	return a - b;
}


// calculates a with modulo b and returns the result
float Calculator::Modulo(float a, float b)
{
	return fmod(a,b);
}


// Devides a with b and returns the result
float Calculator::Devide(float a, float b)
{
	return a / b;
}


// Calculates A times B andreturns the result
float Calculator::Times(float a, float b)
{
	return a * b;
}
