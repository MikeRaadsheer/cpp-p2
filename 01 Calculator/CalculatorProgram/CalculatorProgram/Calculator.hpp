#pragma once
class Calculator
{
public:
	Calculator();
	~Calculator();
	// Adds A to B and returns the result
	float Add(float a, float b);
	// Subtracts B from A and returns the result
	float Subtract(float a, float b);
	// calculates a with modulo b and returns the result
	float Modulo(float a, float b);
	// Devides a with b and returns the result
	float Devide(float a, float b);
	// Calculates A times B andreturns the result
	float Times(float a, float b);
};

