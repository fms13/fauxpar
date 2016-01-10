//============================================================================
// Name        : Faux-Par.cpp
// Author      : Frank M. Schubert
// Version     :
// Copyright   : BSD License
// Description : Demonstration of the Faux-Par library
//============================================================================

#include <iostream>

#include "FauxPar.h"

#include "ExampleClass1.h"

using namespace std;

int main() {
	FauxPar::FauxPar Parameters = ExampleClass1::GetFauxPar();

	cout << Parameters;

	return 0;
}
