/**
 * \file ExampleClass1.cpp
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#include "ExampleClass1.h"

ExampleClass1::ExampleClass1() {
}

ExampleClass1::~ExampleClass1() {
}

FauxPar::FauxPar ExampleClass1::GetFauxPar() {
	FauxPar::FauxPar parameters("ExampleClass1");

	parameters.insert(new FauxPar::ValueFloat("speed_of_light"));

	parameters.insert(new FauxPar::ValueFloat("distance", -5.0, 10.0));

//	parameters.insert(
//			FauxPar::ValueFloat::ptr(
//					new FauxPar::ValueFloat("speed", 5.0, -10.0)));

	return parameters;
}
